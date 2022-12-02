#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n<0) return -1;
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main(int argc, char const *argv[])
{
    int fact = factorial(5);
    //5*4*3*2*1*
    cout << "Factorial 5 numbers is " << fact << endl;
    return 0;
}
