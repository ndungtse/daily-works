#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Union
{
    int num;
    char str[100];
};

struct Struct
{
    int num;
    char str[100];
};

int main()
{
    union Union u;
    struct Struct s;
    printf("Enter 2 numbers: ");
    scanf("%d", &u.num);
    // scanf("%s", u.str);
    printf("Union: %d\n", u.num);
    printf("Enter 2 numbers: ");
    scanf("%d", &s.num);
    scanf("%s", s.str);
    printf("Struct: %d %s\n", s.num, s.str);
    // demonstrate how All members share the same memory, and only one member can be accessed at a time.
    return 0;
}