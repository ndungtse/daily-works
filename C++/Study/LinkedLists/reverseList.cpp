#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* reverseList(Node* head){
//    make head current node
    Node *curr = head;
    // name prev node as null
    Node *prev = NULL;
    // name next node as null
    Node *next = NULL;
    // while current node is not null
    while(curr != NULL) {
        // make next node as current node's next node
        next = curr->next;
        // make current node's next node as prev node
        curr->next = prev;
        // make prev node as current node
        prev = curr;
        // make current node as next node
        curr = next;
    }
    // return prev node
    return prev;
}
int main() {
    
}