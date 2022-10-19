#include <iostream>

using namespace std;

void duplicate(int a, int b, int c)
{
    a*=2;
    b*=2;
    c*=2;
}

int main(int argc, char const *argv[])
{
    int y=1, x=3, z=4;
    duplicate(x,y,z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}
