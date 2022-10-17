#include <iostream>

using namespace std;

int main()
{
    int  marks;
    string passed;
    char grade;

    cout <<"Enter your grade: ";
    cin >> marks;
    passed = (marks>=50)?"passed":"failed";

    cout <<"You "<<passed<<" the exam"<<endl;
    grade = marks>=80?'A':(marks>=60?'B':(marks>=50?'C':'D'));
    cout <<"Your grade is "<<grade<<endl;
}