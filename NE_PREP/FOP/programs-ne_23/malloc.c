#include <stdio.h>
#include <stdlib.h>
struct S
{
    int a;
};
void main()
{
    struct S *ptr;
    int i, j = 1;
    ptr = (struct S *)malloc(2 * sizeof(struct S));
    for (i = 0; i < 2; ++i)
    {
        ((ptr + i)->a) = j + i;
        printf("%d\n", (ptr + i)->a);
    }
    free(ptr);
}
