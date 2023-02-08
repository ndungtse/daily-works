#include <iostream>
using namespace std;

// Linked List node
struct Node {
    int data;
    Node *next;
};

// Function to merge two sorted linked lists
Node* merge(Node* a, Node* b) {
    Node* result = nullptr;
    if (a == nullptr) {
        return b;
    } else if (b == nullptr) {
        return a;
    }

    if (a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }
    return result;
}

// Recursive implementation of merge sort for linked lists
Node* mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHead = slow->next;
    slow->next = nullptr;

    return merge(mergeSort(head), mergeSort(secondHead));
}

// Function to insert a node at the head of a linked list
void push(Node** headRef, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* a = nullptr;
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    push(&a, 20);
    push(&a, 3);
    push(&a, 2);
    cout << "Linked List before sorting:\n";
    printList(a);
    a = mergeSort(a);
    cout << "Linked List after sorting:\n";
    printList(a);
    return 0;
}
