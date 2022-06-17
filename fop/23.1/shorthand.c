#include <stdio.h>
#define N  100000

void main() {
   int a;
    a = 2;

    while (a< N)
    {
        printf("%d\n", a);
        a *= a;
    }
    
}