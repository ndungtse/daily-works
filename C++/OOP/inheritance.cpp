#include <iostream>
using namespace std;

class Person
{

private:
    string Gender;

protected:
    string Clan;

public:
    string Name;
    int Age;
    Person(){};
    Person(string name)
    {
        Name = name;
    };
    Person(string name, string gender, string clan, int age)
    {
        Name = name;
        Gender = gender;
        Clan = clan;
    };
    void setGender(string gender)
    {
        Gender = gender;
    };
    string getGender()
    {
        return Gender;
    };
    void intro()
    {
        cout << "My name is " << Name << " and I'm " << Age << "Years old" << endl;
    };
    static void random(){
        cout << "This is my random static method" << endl;
    }
};

class Student : public Person
{
public:
    string Level;
};

class AdvancedStudent : public Student
{
public:
    string Section;
};

main(int argc, char const *argv[])
{
    Student st1;
    Person p1("Charles", "Male", "Unknown", 17);
    // Student st2 =  (Student) p1;

    AdvancedStudent st3;
    st1.intro();
    // st2.intro();
    st3.intro();

    //accessing static methods
    Person::random();
    Student::random();
    return 0;
}

// class inheritance
// {
// private:
//     /* data */
// public:
//     inheritance(/* args */);
//     ~inheritance();
// };

// inheritance::inheritance(/* args */)
// {
// }

// inheritance::~inheritance()
// {
// }
