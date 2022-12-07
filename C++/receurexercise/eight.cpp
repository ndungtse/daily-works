#include <iostream>
#include <array>
using namespace std;

int lastIndex(int nums[], int len, int x, int num=-1, int n = 0)
{
    if(nums[n]== x)
        num = n;

    if (n == len - 1)
        return num;

    // cout << len << endl;
    return lastIndex(nums, len, x, num, n + 1);
}

int main(int argc, char const *argv[])
{
    int a[] = {5, 5, 6, 20, 5, 6};
    int size = sizeof(a) / sizeof(int);
    int last = lastIndex(a, size, 20);
    cout << last;
    return 0;
}
