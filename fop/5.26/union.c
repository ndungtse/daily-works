#include <stdio.h>

union abc
{
   int a;
   char b;
} var;
struct acb
{
   int a;
   char b;
} var1;

int main(){
    var.a =63;
    var.b=65;
    var1.a =63;
    var1.b=65;
    printf("a=%d\n", var.a);
    printf("b=%c\n", var.b);
    printf("Size is: %ld\n", sizeof(union abc));
    printf("a=%d\n", var1.a);
    printf("b=%c\n", var1.b);
    printf("Size is: %ld", sizeof(struct acb));
    return 0;
}
