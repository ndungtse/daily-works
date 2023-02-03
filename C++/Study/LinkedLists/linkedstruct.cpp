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
    // printList(n1);
    cout << n1->data << " " << n2->data << " " << n3->data << endl;
    return 0;
}