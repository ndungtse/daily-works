#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;
    string lastname;
    int age;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your name is: " << name << " " << lastname << " and your age is: " << age << endl;
    return 0;
    
}