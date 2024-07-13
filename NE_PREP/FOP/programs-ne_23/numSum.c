#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursive(int num);

int main()
{
    int num ;
    char str[20];

    printf("Enter a number: ");
    scanf("%d", &num);
    sprintf(str, "%d", num);
    int sum = 0;
    for (int i = 0; i < strlen(str) ; i++)
    {
        sum += str[i] - '0'; 
    }

    int recSum = recursive(num);
    printf("Sum of number: %d\n", sum);
    printf("Rec Sum of number: %d\n", recSum);
    return 0;
}

int recursive(int num){
    if (num == 0)
    {
        return 0;
    }
    int newNum = num /10;
    return (num%10) + recursive(newNum);
}