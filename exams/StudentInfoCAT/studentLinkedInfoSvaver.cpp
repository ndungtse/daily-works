#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include<regex>
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

// print student info
void printStudent(Student *st)
{
    cout << "Name: " << st->name << endl;
    cout << "Age: " << st->age << endl;
    cout << "Roll Number: " << st->rollNumber << endl;
    cout << "Marks: " << st->marks << endl;
    cout << endl;
}

// push student at the beginning
void push(Student **head, Student *newNode)
{
    newNode->next = *head;
    *head = newNode;
}

// calculate average marks
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

// get and compare enter student's roll number awith the saved students's roll number in the file
bool checkRollNumber(int rollNumber)
{
    // regex pattern to check if if stoi(line) is a number
    regex pattern("[0-9]+");
    
    ifstream file;
    file.open("studInfo.txt");
    string line;
    int count = 0;
    while (getline(file, line))
    {
        if (count == 2)
        {
            if (!regex_match(line, pattern))
            {
                return false;
            }
            if (stoi(line) == rollNumber)
            {
                return true;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }
    return false;
} 

// function to traverse the linked list
void traverse(Student *head)
{
    while (head != NULL)
    {
        printStudent(head);
        head = head->next;
    }
}

// main implementation
int main(int argc, char const *argv[])
{
    int marks[100];
    Student *head = NULL;
    Student *newNode = NULL;
    Student *next = NULL;
    Student *inserted = NULL;
    Student st1;
    int stdCount = 1;

    // get students info from user
    while (true)
    {
        cout << endl;
        cout << "Enter Student name: ";
        getline(cin, st1.name);
        cout << "Enter Student age: ";
        cin >> st1.age;
        while ((st1.age > 30 || st1.age < 10) || cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid age. Enter again (10-30): ";
            cin >> st1.age;
        }

        cout << "Enter Student roll number: ";
        cin >> st1.rollNumber;
        while (st1.rollNumber < 0 || cin.fail() || checkRollNumber(st1.rollNumber))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            if (checkRollNumber(st1.rollNumber)){
                cout << "Roll number already exists. Enter a new roll number: ";
            } else {
                cout << "Invalid roll number. Enter a Postive Number: ";
            }
            cin >> st1.rollNumber;
        }

        cout << "Enter Student marks: ";
        cin >> st1.marks;
        while (st1.marks > 50 || st1.marks < 0 || cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

        // ask if user wants to enter more students
        if(stdCount >= 5) {
            cout << "Do you want to enter more students? (y/n): " ;
            char ch;
            cin >> ch;
            if (ch == 'n' || ch == 'N' || cin.fail())
            {
                break;
            }
            stdCount++;
        } else {
            cout << "You have entered " << stdCount << " students. You have to enter " << 5 - stdCount << " more students." << endl;
            stdCount++;
        }
        cin.clear();
        cin.ignore();
    }

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

    inserted = head;

    while (inserted != NULL)
    {
        printStudent(inserted);
        inserted = inserted->next;
    }

    cout << "======================================================================" << endl;
    cout << "Average Marks: " << averageMarks(head) << endl;

    return 0;
}
