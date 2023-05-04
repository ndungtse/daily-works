#include <iostream>
using namespace std;

class Node
{
public:
    char val;
    Node *next;

    Node(char val)
    {
        this->val = val;
        next = nullptr;
    }
};

/**
 * Stack implementation with linked list
 * @authors ndungutse charles, hirwa vannesa and rosine
*/
class Stack
{
public:
    Node *top;

    Stack()
    {
        top = nullptr;
    }
    /**
     * @param c the character to be pushed into the stack
     */
    void push(char c)
    {
        Node *newNode = new Node(c);
        newNode->next = top;
        top = newNode;
    }
    /**
     * @returns the top element of the stack and removes it from the stack
     */
    char pop()
    {
        if (top == nullptr)
        {
            return '\0';
        }
        Node *temp = top;
        top = top->next;
        char popped = temp->val;
        delete temp;
        return popped;
    }
    /**
     * @returns the top element of the stack
     */
    char peek()
    {
        if (top == nullptr)
        {
            return '\0';
        }
        return top->val;
    }

    /**
     * @returns true if the stack is empty, false otherwise
     */
    bool isEmpty()
    {
        return top == nullptr;
    }
};

/**
 * @param str the string to be checked
 * @returns true if the string is valid, false otherwise
*/
bool isValid(string str)
{
    Stack stack;
    for (char c : str)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stack.push(c);
        }
        else if (c == ')' && stack.peek() == '(')
        {
            stack.pop();
        }
        else if (c == '}' && stack.peek() == '{')
        {
            stack.pop();
        }
        else if (c == ']' && stack.peek() == '[')
        {
            stack.pop();
        }
        else
        {
            return false;
        }
    }
    return stack.isEmpty();
}

int main()
{
    cout << isValid("(]") << endl;            // have to return false
    cout << isValid("()") << endl;            // have to return true
    cout << isValid("{[()]}") << endl;        // have to return true
    cout << isValid("([)]") << endl;          // have to false
    cout << isValid("()[]{}") << endl;        // have to return true
    cout << isValid("([ ]{ } ( ) )") << endl; // have to return true
    return 0;
}