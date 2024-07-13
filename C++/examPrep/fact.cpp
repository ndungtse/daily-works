#include <iostream>
using namespace std;

int factorial(int a[], int len, int i = 0)
{
    if (i == len)
        return 1;

    return a[i] * factorial(a, len, i + 1);
}

int nfact(int n)
{
    if (n == 0)
        return 1;

    return n * nfact(n - 1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    int facts = factorial(arr, 3);
    int fact = nfact(3);
    cout << facts << endl;
    cout << fact << endl;

    return 0;
}
