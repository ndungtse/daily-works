#include <iostream>

using namespace std;

template <typename T>
class Stack
{
public:
    int top;
    T *items;
    int capacity;

    Stack(int capacity)
    {
        items = new T[capacity];
        top = -1;
        this->capacity = capacity;
    };

    void push(T data)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        items[top] = data;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    T peek()
    {
        if (isEmpty())
        {
            // throw out_of_range("Stack is empty");
            cout << "Stack Overflow" << endl;
            return 0;
        }

        return items[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top < 0;
    }

    bool isFull()
    {
        return top >= capacity - 1;
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        int capacity;
        cout << "Enter the capacity: ";
        cin >> capacity;
        Stack<int> s(capacity);

        for (int i = 0; i < capacity; i++)
        {
            int data;
            cout << "Enter the data: ";
            cin >> data;
            s.push(data);
        }

        cout << s.peek() << endl;
        s.pop();
        cout << s.peek() << endl;
        cout << s.size() << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
