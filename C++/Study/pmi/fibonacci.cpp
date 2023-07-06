#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{
    int fib = fibonacci(10);
    cout << "Fibonnaci number 5 is " << fib << endl;
    return 0;
}
