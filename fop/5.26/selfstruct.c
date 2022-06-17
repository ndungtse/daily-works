#include <stdio.h>

struct selfRef
{
    int x;
    struct selfRef * ptr;
};
