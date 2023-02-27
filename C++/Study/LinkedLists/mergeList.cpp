#include <iostream>
#include <ctime>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *mid_point(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *merge(Node *a, Node *b)
{
    // base case
    if (a == NULL)
    {
        return b;
    }
    else if (b == NULL)
    {
        return a;
    }

    // recursive case
    Node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}

Node *merge_sort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // recursive case
    // 1. divide the list into two parts - head and mid
    Node *mid = mid_point(head);
    Node *a = head;
    Node *b = mid->next;
    mid->next = NULL;

    // 2. sort the two parts
    a = merge_sort(a);
    b = merge_sort(b);

    // 3. merge the two sorted lists
    Node *c = merge(a, b);

    return c;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node();
    // inser random numbers
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        Node *temp = new Node();
        temp->data = rand() % 100;
        temp->next = head;
        head = temp;
    }

    cout << "Before sorting" << endl;
    // Print the list
    printList(head);
    head = merge_sort(head);

    cout << "After sorting" << endl;
    // Print the list
    printList(head);

   
   return 0;
}