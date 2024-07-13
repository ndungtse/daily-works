#include <stdio.h>

union U
{
    int intValue;
    float floatValue;
    double doubleValue;
};

union Unsigned
{
    //  char c;
    //  char cd[10];
    int b;
};

int main()
{
    union U num;
    union Unsigned un;
    num.intValue = 10;
    num.floatValue = 3.14;
    num.doubleValue = 2.71828;
    printf("%d\n", num.intValue);
    printf("long size of union un %ld\n", sizeof(un));
    return 0;
}