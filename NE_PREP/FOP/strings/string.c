#include "string.h"
#include <stdio.h>

void display(char str[]);

int main()
{
    char str[50];
    printf("Enter a string: ");
    char dest[20] = "Hello";
    char src[] = "World";
    strncat(dest, src, 3); // Appends "Wor" to "Hello"
    printf("%s\n", dest);  // Output: HelloWor˝
    // fgets(str,50, stdin);
    scanf("%49s", str);
    int val = strncmp("same value", "same VALUE", 1);
    // strncmp compares the first n characters of two strings.
    printf("The value returned by strncmp: %d\n", val);
    display(str);
    return 0;
}

void display(char str[])
{
    printf("The passed string: %s\n", str);
}