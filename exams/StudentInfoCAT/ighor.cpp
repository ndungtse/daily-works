#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct Student
{
public:
    int rollNumber;
    string name;
    int age;
    float marks;
    Student *next;
};
void ShowStudent(Student *st)
{
    cout << "Name: " << st->name << endl;
    cout << "Age: " << st->age << endl;
    cout << "Roll Number: " << st->rollNumber << endl;
    cout << "Marks: " << st->marks << endl;
    cout << endl;

}

// average marks
float averageMarks(Student *head)
{
    float sum = 0;
    int count = 0;
    while (head != NULL)
    {
        sum += head->marks;
        count++;
        head = head->next;
    }
    return sum / count;
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
void addStudent(Student **head, Student *newNode)
{
    newNode->next = *head;
    *head = newNode;
}
int main()
{
    Student *head = NULL;
    Student *newNode = NULL;
    Student studentSample;
    cout << "Enter Student's name: ";
    getline(cin, studentSample.name);
    cout << "Enter Student's age: ";
    cin >> studentSample.age;
    while (studentSample.age > 30 || studentSample.age < 10)
    {
        cout << "Invalid age. The age should be between 10 and 30 please try again :  ";
        cin >> studentSample.age;
    }
    cout << "Enter Student's roll number: ";
    cin >> studentSample.rollNumber;
    while (studentSample.rollNumber < 0)
    {
        cout << "Invalid roll number.The roll number should be a valid positive number please try again :  ";
        cin >> studentSample.rollNumber;
    }
    cout << "Enter Student's marks: ";
    cin >> studentSample.marks;
    while (studentSample.marks > 50 || studentSample.marks < 0)
    {
        cout << "Student marks should be between 0 and 50 please try again :  ";
        cin >> studentSample.marks;
    }
    ofstream stdData;
    stdData.open("studInfo.txt", ios::app);
    stdData << studentSample.name << endl;
    stdData << studentSample.age << endl;
    stdData << studentSample.rollNumber << endl;
    stdData << studentSample.marks << endl;
    stdData.close();
    ifstream inputFile;
    int count = 0;
    int i = 0;
    int sti = 0;
    inputFile.open("studInfo.txt");
    string line;
    while (getline(inputFile, line))
    {
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
            addStudent(&head, newNode);
        }
        count++;
    }
    Student *stdTest = NULL;
    stdTest = head;
    // cout<<"Head is : "<<stdTest;
    while (stdTest != NULL)
    {
        ShowStudent(stdTest);
        stdTest = stdTest->next;
    }

    cout << "Average marks: " << averageMarks(head) << endl;
    return 0;
}