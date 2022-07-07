#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void main(){
    int names[100];
    int i;
    int n;

    printf("Enter number of names: ");
    scanf("%d", n);
    for ( i = 0; i <n ; i++)
    {
        printf("Enter name %d: ", i);
        scanf("%[^\n]%*c", names[i]);
    }
    
}