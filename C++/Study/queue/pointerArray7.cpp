#include <iostream>

using namespace std;


struct Queue
{
    int front, rear, capacity;
    int* array;

    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        array = new int;
    }

void enqueue(int data)
{
    if (capacity == rear)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else
    {
        array[rear] = data;
        rear++;
    }
    return;
}

void dequeue()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < rear - 1; i++)
        {
            array[i] = array[i + 1];
        }
        rear--;
    }
    return;
}

void display()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = front; i < rear; i++)
    {
        cout << array[i] << " ";
    }
    return;
}
};

int main(int argc, char const *argv[])
{
    Queue q(4);
    q.display(); // Queue is empty

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    return 0;
}
