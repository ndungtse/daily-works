#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
};

int main(int argc, char const *argv[])
{
    Student st1;
    cout << "Enter Student name: ";
    cin >> st1.name;
    cout << "Enter Student age: ";
    cin >> st1.age;
    cout << "Enter Student roll number: ";
    cin >> st1.rollNumber;
    cout << "Enter Student marks: ";
    cin >> st1.marks;

    ofstream file;
    file.open(st1.name+".txt");
    file << st1.name << endl;
    file << st1.age << endl;
    file << st1.rollNumber << endl;
    file << st1.marks << endl;
    file.close();

    ifstream studFile;
    Student st2;
    int count = 0;
    studFile.open(st1.name + ".txt");
    string line;
    
    cout << "\n ============Reading from file: ============= \n" << endl;
    while (getline(studFile, line))
    {
        if (count == 0)
        {
            st2.name = line;
        }
        else if (count == 1)
        {
            st2.age = stoi(line);
        }
        else if (count == 2)
        {
            st2.rollNumber = stoi(line);
        }
        else if (count == 3)
        {
            st2.marks = stof(line);
        };
        count++;
    }

    cout << "Student name: " << st2.name << endl;
    cout << "Student age: " << st2.age << endl;
    cout << "Student roll number: " << st2.rollNumber << endl;
    studFile.close();

    return 0;
}