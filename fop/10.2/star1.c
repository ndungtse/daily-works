#include <stdio.h>

void main(void){
    int a;
    int b;
    int c;
    for ( a = 10; a > 0; a--)
    {
        for ( b = 10; b >a ; b--)
        {
            printf(" ");
        }
        for ( c = 1; c < a; c++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}