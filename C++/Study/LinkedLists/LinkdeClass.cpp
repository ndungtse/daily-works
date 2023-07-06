#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        next = NULL;
    }
    Node* reverseList(Node *head) {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;
        while(curr != NULL) {
            // Store next node in next pointer
            next = curr->next;
            // Reverse the link
            curr->next = prev;
            // Move pointers one position ahead
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertPos(Node *head, int pos, int data) {
        Node *temp = new Node(data);
        Node *curr = head;
        for(int i = 0; i < pos - 1; i++) {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }

    void deletePos(Node *head, int pos) {
        Node *curr = head;
        for(int i = 0; i < pos - 1; i++) {
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void insertPos(Node *head, int pos, int data) {
    Node *temp = new Node(data);
    Node *curr = head;
    for(int i = 0; i < pos - 1; i++) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}

int main(int argc, char const *argv[])
{
    // statically
    Node n1(1);
    Node n2(2);

    n1.next = &n2;
    cout << n1.data << n2.data << endl;
    // Head is not a node but a pointer to the first node
    Node *head = &n1;
    cout << head->data << endl;
    // dynamically
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);

    n2.next = n3;
    n3->next = n4;
    printList(head);
    return 0;
}