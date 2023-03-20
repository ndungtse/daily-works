#include <iostream>

using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void enqueue()
{
    int val;

    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the element in queue : " << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow ";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
    }
}

void display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

void readFront()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
        cout << "Front element is: " << queue[front] << endl;
}

void readRear()
{
    if (rear == -1)
        cout << "Queue is empty" << endl;
    else
        cout << "Rear element is: " << queue[rear] << endl;
}

int main(int argc, char const *argv[])
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Read the front element" << endl;
    cout << "5) Exit" << endl;

    do
    {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            readFront();
            break;
        }
        case 5:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    } while (ch != 5);
    return 0;
}
