#include <iostream>
using namespace std;

int binarySearc(int arr[], int search, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == search)
    {
        return mid;
    }
    else if (arr[mid] > search)
    {
        return binarySearc(arr, search, start, mid - 1);
    }
    else
    {
        return binarySearc(arr, search, mid + 1, end);
    }
}