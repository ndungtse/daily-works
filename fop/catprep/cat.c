#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,i,j;

    printf("Please input a number:");
    scanf("%d",&n);

    if (n>0)
    {
      for (i=0; i<n; i++){
          for (j=0; j<i+1; j++){
              printf("*");
          }
          printf("\n");
    }
    }
    else
    {
        printf("Thank you for using our program.\n");
    }
    
    return 0;

}
