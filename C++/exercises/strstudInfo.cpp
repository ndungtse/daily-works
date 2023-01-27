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

void printStudent(Student st)
{
    cout << "Name: " << st.name << endl;
    cout << "Age: " << st.age << endl;
    cout << "Roll Number: " << st.rollNumber << endl;
    cout << "Marks: " << st.marks << endl;
}

void merge(Student arr[], int l, int m, int r)
{
    int i, j, k;
    const int n1 = m - l + 1;
    const int n2 = r - m;

    Student L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].marks <= R[j].marks)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Student arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main(int argc, char const *argv[])
{
    int marks[100];
    Student students[100];
    Student st1;
    cout << "Enter Student name: ";
    cin >> st1.name;
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
        // copy student
        if (count == 0)
        {
            students[sti].name = line;
        }
        else if (count == 1)
        {
            students[sti].age = stoi(line);
        }
        else if (count == 2)
        {
            students[sti].rollNumber = stoi(line);
        }
        else if (count == 3)
        {
            students[sti].marks = stof(line);
            count = -1;
            sti++;
        } 
        count++;
    }

    // sort students array
    mergeSort(students, 0, sti - 1);

    // copy marks to marks array
    for (int j = sti; j >0 ; j--)
    {
        printStudent(students[j]);
        cout << endl;
    }

    return 0;
}