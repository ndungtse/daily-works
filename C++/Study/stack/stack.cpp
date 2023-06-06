#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int nextIndex;
    int capacity;

    public:
    Stack() {
        arr = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    Stack(int cap) {
        arr = new int[cap];
        nextIndex = 0;
        capacity = cap;
    }

    int size() {
        return nextIndex;
    }
    bool isEmpty() {
        return nextIndex == 0;
    }
    void push(int data) {
        if (nextIndex == capacity) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[nextIndex] = data;
        nextIndex++;
    }
    void pushEvenFull(int data) {
        // if (nextIndex == capacity) {
        //     int *newArr = new int[2 * capacity];
        //     for (int i = 0; i < capacity; i++) {
        //         newArr[i] = arr[i];
        //     }
        //     capacity *= 2;
        //     delete [] arr;
        //     arr = newArr;
        // }
        // arr[nextIndex] = data;
        // nextIndex++;
        
        cout << "Push Even Full" << endl;
        // OR
        if(nextIndex == capacity) {
            int *newArr = new int[2 * capacity];
            for (int i = 0; i < capacity*2; i++) {
                newArr[i] = arr[i];
            }
            newArr[nextIndex] = data;
            arr = newArr;
            nextIndex++;
            capacity *= 2;
            return;
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
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[nextIndex - 1];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pushEvenFull(70);
    s.pushEvenFull(71);
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