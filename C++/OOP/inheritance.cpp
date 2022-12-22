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
    static void random()
    {
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

class Teacher : Person
{
public:
    string Subject;
    Teacher(string name, int age, string subject) : Person(name)
    {
        Subject = subject;
        Age = age;
    };
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << endl;
    }
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

    Teacher t1("Damascene10", 35, "DSA");
    t1.PrepareLesson();

    // accessing static methods
    Person::random();
    Student::random();
    return 0;
}
