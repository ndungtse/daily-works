#include <iostream>
#include <array>
using namespace std;

int lastIndex(int nums[], int x, int n = 0)
{
    int len;
    if (n == len - 1)
        return n;

    return lastIndex(nums, x, n + 1);
}

int main(int argc, char const *argv[])
{
    int a[] = {5, 5, 6, 20, 5, 6};
    int last = lastIndex(a, 5);
    cout << last;
    return 0;
}
