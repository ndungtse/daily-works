#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double x1;
    double a,b,c;
    double x2;
    double z;

    printf("Enter number a: \n");
    scanf("%lf",&a);
    printf("Enter number b: \n");
    scanf("%lf", &b);
    printf("Enter number  c: \n");
    scanf("%lf", &c);

    x1 = (-b + sqrt(b*b)-4*a*c)/ (2*a);
    x2 =  (-b - sqrt(b*b)-4*a*c) / (2*a);

    printf("x1 is: %lf\n",x1);
    printf("x2 is: %lf\n",x2);

    return 0;
}



