#include <iostream>
using namespace std;

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
    void setNext(Node *n)
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
};

int main(int argc, char const *argv[])
{
    LinkedList *l = new LinkedList();
    l->addNode(1);
    l->addNode(2);
    l->addNode(3);
    l->printList();
    return 0;
}