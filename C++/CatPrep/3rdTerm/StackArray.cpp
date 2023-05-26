#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int capacity;
    int nextIndex;

public:
    Stack(int cap)
    {
        arr = new T[cap];
        this->capacity = cap;
        this->nextIndex = 0;
    }
    void push(T data)
    {
        if (capacity == nextIndex)
        {
            cout << "Stack is full " << capacity << nextIndex << endl;
        }
        else
        {
            cout<< "Pushing: "<< data << endl;
            arr[nextIndex] = data;
            nextIndex++;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            nextIndex--;
        }
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            cout << arr[nextIndex - 1] << endl;
        }
    }
    bool isEmpty()
    {
        return nextIndex == 0;
    };
    int size (){
        return capacity;
    }
};

int main()
{
    Stack<int> s(4);
    cout<< "Stack Cap" << s.size() << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}