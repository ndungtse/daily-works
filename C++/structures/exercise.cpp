#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct student
{
    int age;
    char studentname[20];
    float rollno;
    float marks;
};

void printstudent(student s)
{
    cout << "Student name: " << s.studentname << endl;
    cout << "Student age: " << s.age << endl;
    cout << "Student rollno: " << s.rollno << endl;
    cout << "Student marks: " << s.marks << endl;
}

int main()
{
    student s1;
    s1.age = 20;
    s1.rollno = 1.1;
    s1.marks = 90.5;
    strcpy(s1.studentname, "John");
    printstudent(s1);
    return 0;
}