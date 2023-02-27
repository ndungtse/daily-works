#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* deleteAtEnd(Node *head) {
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
    return head;
}
void printList(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node();
    for(int i=0; i<10; i++) {
        Node *temp = new Node();
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    // Print the list
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    head = deleteAtEnd(head);

}