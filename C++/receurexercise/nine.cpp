#include <iostream>
#include <array>
using namespace std;

int firstIndex(int nums[], int len, int x, int n = 0)
{
    if (nums[n] == x)
        return n;

    if (n == len - 1)
        return n;

    // cout << len << endl;
    return firstIndex(nums, len, x, n + 1);
}

int main(int argc, char const *argv[])
{
    int a[] = {5, 5, 6, 20, 5, 6};
    int size = sizeof(a) / sizeof(int);
    int first = firstIndex(a, size, 5);
    cout << first;
    return 0;
}
