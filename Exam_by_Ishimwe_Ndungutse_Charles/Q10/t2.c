#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>

  int main(){
  	int number,i,j,k;
  	printf("Please input a number: ");
	scanf("%d",&number);
	if(number%2!=0 || (isalpha(number))){
		printf("Thank you for using this program.");
		exit(0);
	}
	else{
		 for (i = 0; i <= number; i++)
    {
        for (j = i; j < number; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf ("\n");
    }
		}
		
	}