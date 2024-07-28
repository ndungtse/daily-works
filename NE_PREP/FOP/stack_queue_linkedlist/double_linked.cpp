#include <iostream>

using namespace std;

template <typename T>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

template <typename T>
class LinkedList
{
public:
    Node<T> *head;
    LinkedList()
    {
        head = NULL;
    }

    void insert(T data)
    {
        Node<T> *newNode = new Node<T>();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node<T> *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    };

    void print()
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    //  function that would add a node after the previous_node node.
    void addAfterPrevNode(T data) {
        Node<T> newNode = new Node<T>();
        newNode.data = data;
        newNode.prev = NULL;
        newNode.next = NULL;

        Node *temp = head;
        while (te)
        {
            /* code */
        }
        
    }
};

int main(int argc, char const *argv[])
{

    LinkedList<int> list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4); 

    list.print();
    return 0;
}
