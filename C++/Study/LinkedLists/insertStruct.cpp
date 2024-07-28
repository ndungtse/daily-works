#include <iostream>
using namespace std;

// insert operation on linked list in C++ in specific position
class Node
{
    int data;
    Node *next;

public:
    Node(int d)
    {
        data = d;
        next = NULL;
    }
    void setNext(Node *n) // get n as type Node
    {
        next = n;
    }
    Node *getNext()
    {
        return next;
    }
    int getData()
    {
        return data;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void addNode(int d)
    {
        Node *n = new Node(d);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->setNext(n);
            tail = n;
        }
    }
    void printList()
    {
        Node *n = head;
        while (n != NULL)
        {
            cout << n->getData() << " ";
            n = n->getNext();
        }
    }
    void insertNode(int d, int pos)
    {
        Node *n = new Node(d);
        if (pos == 1)
        {
            n->setNext(head);
            head = n;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->getNext();
            }
            n->setNext(temp->getNext());
            temp->setNext(n);
        }
    }
};


int main(int argc, char const *argv[])
{
    // get the linked list from the user
    LinkedList l;
    int n, d, pos;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: ";
        cin >> d;
        l.addNode(d);
    }
    cout << "Enter the data and position to insert: ";
    cin >> d >> pos;

    l.insertNode(d, pos);
    l.printList();
    return 0;
}