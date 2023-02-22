#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void displayNodes(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteNode(Node *head) {
    if(head == NULL)
        return NULL;

    Node *temp = head;
    head = temp->next;
    // delete temp;
    return head;    
}

Node* deleteAll(Node *head){
    if(head == NULL)
        return NULL;
    Node *temp = head;
    while(temp != NULL){
        head = temp->next;
        delete temp;
        temp = head;
    }
    return head;
}

Node* deleteAtEnd(Node *head){
    if(head == NULL)
        return NULL;
    Node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

int main() {
    // insert ten nodes
    Node *head = NULL;
    Node *temp = head;
    for (int i = 0; i < 10; i++) {
        temp = new Node();
        temp->data = i;
        temp->next = head;
        head = temp;
    }
    displayNodes(head);
    head = deleteNode(head);
    displayNodes(head);
    head = deleteAll(head);
    displayNodes(head);

    // new head
    Node *newHead = NULL;
    // insert 6 nodes
    for (int i = 0; i < 6; i++) {
        temp = new Node();
        temp->data = i;
        temp->next = newHead;
        newHead = temp;
    }

    displayNodes(newHead);
    newHead = deleteAtEnd(newHead);
    displayNodes(newHead);
}