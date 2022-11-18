#include <iostream>
using namespace std;

int sum1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sum2(int n)
{
    int sum = 0;
    sum = (n * (n + 1)) / 2;
    return sum;
}

int main(int argc, char const *argv[])
{
    printf("Sum of first 100 numbers is %d\n", sum1(100));
    printf("Sum of first 100 numbers is %d", sum2(100));
    return 0;
}
