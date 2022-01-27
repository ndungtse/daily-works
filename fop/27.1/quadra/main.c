#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double x1;
    double a,b,c;
    double x2;
    double z;

    printf("Enter number a: ");
    scanf("%lf ",&a);
    printf("Enter numbers b: ");
    scanf("%lf  ", &b);
    printf("Enter numbers  c: ");
    scanf("%lf", &c);

    x1 = (-b + sqrt(b*b)-4*a*c)/ (2*a);
    x2 =  (-b - sqrt(b*b)-4*a*c) / (2*a);

    printf("x1 is: %lf",x1);
    printf("x2 is: %lf",x2);
}
    return 0;

