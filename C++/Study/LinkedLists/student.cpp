#include <iostream>
using namespace std;

class Student
{

public:
    int id;
    string name;
    int age;
    Student *student;
    Student(int id, string name, int age)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        student = NULL;
    }
};

void printStudent(Student *s)
{
    cout << "ID: " << s->id << endl;
    cout << "Name: " << s->name << endl;
    cout << "Age: " << s->age << endl;
}

class LinkedList
{
    Student *head;
    Student *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void addStudent(int id, string name, int age)
    {
        Student *s = new Student(id, name, age);
        if (head == NULL)
        {
            head = s;
            tail = s;
        }
        else
        {
            tail->student = s;
            tail = s;
        }
    }
    void printList()
    {
        Student *s = head;
        while (s != NULL)
        {
            printStudent(s);
            s = s->student;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList();
    // get 5 students from the user
    for (int i = 0; i < 5; i++)
    {
        int id;
        string name;
        int age;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        list->addStudent(id, name, age);
    }
    list->printList();
    return 0;
}