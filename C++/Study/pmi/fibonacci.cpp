#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<0) return -1;
    // cout << n << endl;
    // return (n == 0) ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
    // if
}

int main(int argc, char const *argv[])
{
    int fib = fibonacci(10);
    cout << "Fibonnaci number 5 is " << fib << endl;
    return 0;
}
