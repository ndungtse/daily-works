#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1, mid = (low + high) / 2;
    while ((low <= high) && (arr[mid] != key))
    {
        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        return -1;
    else
        return mid;
}

void main(){
    int numbers[10] = {2, 3, 8, 9, 10, 4, 5, 6, 7};
    int number = binarySearch(numbers, 11, 4);

    if (number==-1)
    {
        printf("Number not found\n");
    }else{
        printf("%d", number);
    }
}
