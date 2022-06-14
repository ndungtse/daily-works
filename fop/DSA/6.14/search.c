#include <stdio.h>

int linearSearch(int *arr, int n, int key)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}