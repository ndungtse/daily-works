#include <iostream>
using namespace std;

// stack implementation with linked list
template <typename T>
class Node {
    public:
    T data;
    Node<T> *next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack {
    Node<T> *head;
    int size;

    public:
    Stack() {
        head = NULL;
        size = 0;
    }

    int getSize() {
        return size;
    }
    bool isEmpty() {
        return size == 0;
    }
    void push(T data) {
        Node<T> *newNode = new Node<T>(data);
        newNode->next = head;
        head = newNode;
        size++;
    }
    T pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        T ans = head->data; // or T ans = top();
        Node<T> *temp = head; // make a copy of head pointer to delete 
        head = head->next; // move head pointer to next node 
        delete temp; // delete the node
        size--;
        return ans; // return the data
    }
    T top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return head->data;
    }
};

int main() {
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    s.push(107);

    while (!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }
    cout << s.getSize() << endl;
    return 0;
}