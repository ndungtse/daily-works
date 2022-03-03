#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("factorial of %d= %d", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1){
        return n * multiplyNumbers(n- 1);
    }
    else {
        return 1;
    }
}