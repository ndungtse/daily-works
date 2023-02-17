#include <iostream>

using namespace std;

class MyClass
{
private:
    int a;

public:
    int getA()
    {
        return a;
    }
    MyClass(int a)
    {
        this->a = a;
    }
    ~MyClass();
};

class MyDerivedClass : public MyClass
{

};

int main()
{
    MyClass obj(10);
    // obj.a = 20;
    cout << obj.getA() << endl;
    return 0;
}