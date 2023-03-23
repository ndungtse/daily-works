#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void insertNode(Node *head, int d, int pos){
    Node *n = new Node();
    n->data = d;
    n->next = NULL;
    if (pos == 1)
    {
        n->next = head;
        head = n;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            cout << "temp->data: " << temp->data << endl;
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }
}

int main(int argc, char const *argv[])
{
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    
    n1->data = 1;
    n1->next = n2;
    n2->data = 2;
    n2->next = n3;
    n3->data = 3;
    n3->next = NULL;

    cout << "Linked List: ";
    printList(n1);
    cout << endl;
    insertNode(n1, 4, 2);
    cout << "Linked List: ";
    printList(n1);
    // cout << n1->data << " " << n2->data << " " << n3->data << endl;
    return 0;
}