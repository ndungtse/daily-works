#include <iostream>
using namespace std;

int binarySearch(int arr[], int search, int start, int end)
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
        return binarySearch(arr, search, start, mid - 1);
    }
    else
    {
        return binarySearch(arr, search, mid + 1, end);
    }
}