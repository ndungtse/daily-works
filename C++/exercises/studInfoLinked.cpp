#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Linked List student
struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
    Student *next;
};

void printStudent(Student *st)
{
    cout << "Name: " << st->name << endl;
    cout << "Age: " << st->age << endl;
    cout << "Roll Number: " << st->rollNumber << endl;
    cout << "Marks: " << st->marks << endl;
    cout << endl;
}

// insert student at the specified position
void insert(Student **head, Student *newNode, int pos)
{
    if (pos == 0)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        Student *temp = *head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// merge linked list student
Student *mergeSortHigh(Student *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Student *slow = head;
    Student *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Student *mid = slow->next;
    slow->next = NULL;
    Student *left = mergeSortHigh(head);
    Student *right = mergeSortHigh(mid);
    Student *sorted = NULL;
    if (left->marks >= right->marks)
    {
        sorted = left;
        left = left->next;
    }
    else
    {
        sorted = right;
        right = right->next;
    }
    Student *s = sorted;
    while (left != NULL && right != NULL)
    {
        if (left->marks >= right->marks)
        {
            s->next = left;
            left = left->next;
        }
        else
        {
            s->next = right;
            right = right->next;
        }
        s = s->next;
    }
    while (left != NULL)
    {
        s->next = left;
        left = left->next;
        s = s->next;
    }
    while (right != NULL)
    {
        s->next = right;
        right = right->next;
        s = s->next;
    }
    return sorted;
}

void push(Student **head, Student *newNode)
{
    newNode->next = *head;
    *head = newNode;
}

// main implementation
int main(int argc, char const *argv[])
{
    int marks[100];
    // Student students[100];
    Student *head = NULL;
    Student *newNode = NULL;
    Student *temp = NULL;
    Student *prev = NULL;
    Student *next = NULL;
    Student *current = NULL;
    Student *last = NULL;
    Student *sorted = NULL;
    Student *s = NULL;
    Student st1;

    // get student info from user
    cout << "Enter Student name: ";
    getline(cin, st1.name);
    cout << "Enter Student age: ";
    cin >> st1.age;
    while (st1.age > 30 || st1.age < 10)
    {
        cout << "Invalid age. Enter again (10-30): ";
        cin >> st1.age;
    }

    cout << "Enter Student roll number: ";
    cin >> st1.rollNumber;
    while (st1.rollNumber < 0)
    {
        cout << "Invalid roll number. Enter a Postive Number: ";
        cin >> st1.rollNumber;
    }

    cout << "Enter Student marks: ";
    cin >> st1.marks;
    while (st1.marks > 50 || st1.marks < 0)
    {
        cout << "Invalid marks. Enter again (<50): ";
        cin >> st1.marks;
    }

    ofstream file;
    file.open("studInfo.txt", ios::app);
    file << st1.name << endl;
    file << st1.age << endl;
    file << st1.rollNumber << endl;
    file << st1.marks << endl;
    file.close();

    ifstream studFile;
    int count = 0;
    int i = 0;
    int sti = 0;
    studFile.open("studInfo.txt");
    string line;

    // copy marks to marks array and student students array from a file
    while (getline(studFile, line))
    {
        // copy student to linked list
        if (count == 0)
        {
            newNode = new Student;
            newNode->name = line;
        }
        else if (count == 1)
        {
            newNode->age = stoi(line);
        }
        else if (count == 2)
        {
            newNode->rollNumber = stoi(line);
        }
        else if (count == 3)
        {
            newNode->marks = stof(line);
            count = -1;
            push(&head, newNode);
        }
        count++;
    }

    // // sort students linked list according to marks
    sorted = mergeSortHigh(head);

    cout << endl
         << "Students Info after Sorting according to marks: \n"
         << endl;
    s = sorted;

    while (s != NULL)
    {
        printStudent(s);
        s = s->next;
    }

    return 0;
}