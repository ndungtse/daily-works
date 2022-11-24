#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 100, b = 200;
    int *p =&a, *q = &b;

    cout << "p= "<< p << " q="<< q<< endl;
    cout << "*p= "<< *p << " *q="<< *q<< endl;

    int x = 15;
    int y = 20;
    int *c = &y;
    *c = 15;
    cout << x << " " << y << endl;

        return 0;
}
