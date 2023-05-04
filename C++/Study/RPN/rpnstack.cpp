#include <iostream>
#include <string>

using namespace std;

/**
 * Node class for linked list implementation of stack
*/
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

/**
 * Stack implementation with linked list
 * @authors ndungutse charles, hirwa vannesa and rosine
 */
class Stack
{
    Node *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    /**
     * @param c the character to be pushed into the stack
     */
    void push(int ele)
    {
        Node *ne = new Node(ele);
        ne->next = head;
        head = ne;
        size++;
    }
    bool isEmpty()
    {
        return head == NULL;
    }
    int peek()
    {
        if (isEmpty())
            return 0;
        return head->data;
    }
    int getSize()
    {
        return size;
    }
    /**
     * @returns the top element of the stack and removes it from the stack
     */
    void pop()
    {
        if (isEmpty())
            return;
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
    }
};

/**
 * Evaluate the value of an arithmetic expression in Reverse Polish Notation.
 * Valid operators are +, -, *, /. Each operand may be an integer or another expression.
 * @param expression the expression to be evaluated
 * @returns the value of the expression
*/
int evaluateRPN(string expression)
{
    Stack stack;
    int operator1, operator2;
    for (char &c : expression)
    {
        if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            operator2 = stack.peek();
            stack.pop();
            operator1 = stack.peek();
            stack.pop();
            switch (c)
            {
            case '+':
                stack.push(operator1 + operator2);
                break;
            case '-':
                stack.push(operator1 - operator2);
                break;
            case '*':
                stack.push(operator1 * operator2);
                break;
            case '/':
                stack.push(operator1 / operator2);
                break;
            }
        }
        else if (isdigit(c))
        {
            stack.push(c - '0');
        }
    }
    return stack.peek();
}

int main(int argc, char const *argv[])
{
    string expression = "2 1 + 3 *";
    cout << "The value of the expression " << expression << " is " << evaluateRPN(expression) << endl;
    return 0;
}