#include <iostream>
// #define MAX = 5

using namespace std;

const int MAX = 5;

template <typename T>
class Queue
{
public:
    int rear;
    int front;
    T items[MAX];

    Queue()
    {
        rear = -1;
        front = -1;
    }

    void enqueue(T data)
    {
        if (front == -1)
        {
            front = 0;
        }

        if (rear >= MAX - 1)
        {
            cout << "Queue Overflow " << rear << endl;
            return;
        }
        rear++;

        items[rear] = data;
    }

    void dequeue()
    {
        if (rear == -1 || front == -1)
        {
            cout << "Queue underflow";
            return;
        }

        if (front >= MAX - 1)
        {
            cout << "Queue underflow";
            return;
        }
        T toRemove = items[front];
        front++;
        // return toRemove;
    }

    void display()
    {
        if (front < 0)
        {
            cout << "Queue is empty" << endl;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << items[i] << "\n";
        }
    }
};

int main(int argc, char const *argv[])
{
    Queue<int> myQueue;
    for (int i = MAX; i > 0; i--)
    {
        myQueue.enqueue(i);
    }
    // qsort(myQueue.items,);
    myQueue.display();
    myQueue.enqueue(33); // not possible
    myQueue.dequeue();
    myQueue.display();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    // char output[100];
    // system("ls -a") << output;
    return 0;
}
