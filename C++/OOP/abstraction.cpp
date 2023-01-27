#include <iostream>
using namespace std;

class AbstractEmployee
{
    // make it virtual in order to be obligatory
    virtual void askForProm() = 0;
};
class Employee : AbstractEmployee
{
private:
    int Age;

protected:
    string Company;

public:
    string Name;
    string Religion;
    void sayHello()
    {
        cout << "My name is " << Name << " and I'm " << this->Religion << endl;
    };
    Employee(string name, string religion)
    {
        this->Name = name;
        Religion = religion;
    };
    Employee(string name, string religion, string company, int age)
    {
        this->Name = name;
        Religion = religion;
        Company = company;
        Age = age;
    };
    Employee(){};
    void setAge(int age)
    {
        Age = age;
    };
    int getAge()
    {
        return Age;
    };
    void askForProm(){
        if(Age>30){
            cout << Name << " get promoted" << endl;
        } else {
            cout << Name << " Sorry You cannot get a promotion" << endl;
        }
    }
};
int main(int argc, char const *argv[])
{
    Employee emp1 = Employee("Charles", "Catholic");
    Employee emp2;
    Employee emp3("Audrey", "Adventist", "CaRiDev", 16);
    emp2.Name = "Sabrina";
    emp1.sayHello();
    cout << emp2.Name << endl;

    // setter and getters
    emp1.setAge(17);
    cout << emp1.getAge() << endl;
    emp3.sayHello();
    emp3.askForProm();
    return 0;
}
