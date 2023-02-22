#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int searchPos(Node *head, int key)
{
    Node *current = head;
    int pos = 0;
    while (current != NULL)
    {
        if (current->data == key)
        {
            cout << "Found at position: " << pos << endl;
            return true;
        }
        current = current->next;
        pos++;
    }
    return -1;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    // insert 100 nodes
    Node *temp = head;
    for (int i = 0; i < 100; i++)
    {
        temp->data = i;
        temp->next = new Node();
        temp = temp->next;
    }

    cout << search(head, 59) << endl;

    return 0;
}