#include <iostream>

using namespace std;

// node structure
struct Node {
    int data;
    Node *next;
};

void insert(Node **head, int data, int pos) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (pos == 0) {
        newNode->next = *head;
        *head = newNode;
    } else {
        Node *temp = *head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void insertOnTail(Node **head, int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// void makeDoubleCircular(Node **head) {
//     Node *temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = *head;
//     (*head)->next->next->next->next->next = *head;
// }

/**removes node from list by data
 * @param head pointer to head of list
 * @param data data to be removed
*/
void removeNodeData(Node **head, int data){
    Node *temp = *head;
    if (temp->data == data) {
        *head = temp->next;
        delete temp;
    } else {
        while (temp->next->data != data) {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
}

// remove node from list by position
void removeNode(Node **head, int pos) {
    Node *temp = *head;
    if (pos == 0) {
        *head = temp->next;
        delete temp;
    } else {
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
}

void printList(Node **head){
    Node *temp = *head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL;
    insert(&head, 1, 0);
    insert(&head, 2, 1);
    insert(&head, 3, 2);
    printList(&head);
    insert(&head, 14, 1);
    cout << endl;
    printList(&head);
    cout<< "removing element"<< endl;
    removeNodeData(&head, 14);
    printList(&head);
}