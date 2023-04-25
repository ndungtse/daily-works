#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int nextIndex;
    int capacity;

    public:
    Stack() {
        arr = new T[4];
        nextIndex = 0;
        capacity = 4;
    }
    Stack(int cap) {
        arr = new T[cap];
        nextIndex = 0;
        capacity = cap;
    }

    int size() {
        return nextIndex;
    }
    bool isEmpty() {
        return nextIndex == 0;
    }
    void push(T data) {
        if (nextIndex == capacity) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[nextIndex] = data;
        nextIndex++;
    }
    void pushEvenFull(T data) {
        if (nextIndex == capacity) {
            T *newArr = new T[2 * capacity];
            for (int i = 0; i < capacity; i++) {
                newArr[i] = arr[i];
            }
            capacity *= 2;
            delete [] arr;
            arr = newArr;
        }
        arr[nextIndex] = data;
        nextIndex++;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        nextIndex--;
    }
    T top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[nextIndex - 1];
    }
};

int main() {
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.push(95);
    s.push(122);
    s.push('e');
    s.push('f');

    while (!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}