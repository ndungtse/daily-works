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

void main(){
    int numbers[3] = {2, 3,3};
    int number = linearSearch(numbers, 3, 3);

    if (number==-1)
    {
        printf("Number not found\n");
    }else{
        printf("%d", number);
    }
}