#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

bool search(Node *head, int key) {
    Node *current = head;
    while (current != NULL) {
        if (current->data == key) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    // insert 100 nodes
    Node *temp = head;
    for (int i = 0; i < 100; i++) {
        temp->data = i;
        temp->next = new Node();
        temp = temp->next;
    }

    // head->data = 1;
    // head->next = second;

    // second->data = 9;
    // second->next = third;

    // third->data = 3;
    // third->next = NULL;

    cout << search(head, 59) << endl;

    return 0;
}