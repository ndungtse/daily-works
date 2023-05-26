#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int capacity;

public:
    Stack()
    {
        this->head = NULL;
        capacity = 0;
    }
    void push(T data)
    {
        Node<T> *temp = new Node<T>(data);
        temp->next = head;
        head = temp;
        capacity++;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        capacity--;
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;

            head->data;
        }
    }
    int size()
    {
        return capacity;
    }
    bool isEmpty()
    {
        return capacity == 0;
    }
};

int main()
{
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    s.push(107);

    while (!s.isEmpty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << s.size() << endl;
    return 0;
}