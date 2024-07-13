#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (checkPrime(num))
    {
        printf("The number %d is a prime number.\n", num);
    }
    else
    {
        printf("The number %d is not a prime number.\n", num);
    }
    return 0;
}

bool checkPrime(int num)
{
    int foundFactors = 0;
    for (int i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
        {
            foundFactors++;
        }
    }
    if (foundFactors > 2)
    {
        return false;
    }
    return true;
}