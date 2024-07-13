// c program to enable array iput from user as num1, num2, num3, num4, num5
// remove ',' from input and print the array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int arr[5];
    printf("Enter 5 numbers: ");
    scanf("%s", str);
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ',')
        {
            arr[j] = str[i] - '0';
            j++;
        }
        i++;
    }
    printf("Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}