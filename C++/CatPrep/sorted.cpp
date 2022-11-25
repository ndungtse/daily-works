#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    return isSorted(a + 1, n - 1);
}
// Alternatively
bool isSorted2(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[n - 2] > a[n - 1])
    {
        return false;
    }
    return isSorted2(a, n - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    if (isSorted(a, 5))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}
