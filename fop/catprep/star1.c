#include <stdio.h>
#include <stdlib.h>
void main(){
    int i,j,k,l;
   /*  for(i=0;i<10; i++){
        for(j=0;j<i; ++j){
            printf("*");
        }
        printf("\n");
    } */
  /*   for(i=10; i>0; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    } */
/*    for(i=10; i>0; i--){
       for(j=10; j>i; j--){
           printf(" ");
       }
       for(k=1; k<i; k++){
           printf("%d", k);
       }
       printf("\n");
   } */
    int rows =10;
      for(i=1; i<rows; i++){
        for(j=rows; j>i; j--){
           printf(" "); 
        }
        for ( k = 1; k < i; k++)
        {
            printf("%d", k);
        }
        for ( l = k; l >= 1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
   }

/* 
    for ( i = 10; i >0; i--)
    {
        for(k=10; k >i; k--){
            printf(" ");
        }
        for(j=1; j<i; j++){
            printf("%d", j);
    }
    printf("\n");
    }
    for ( i = 0; i <10; i++)
    {
        for(k=1; k <i; k++){
            printf(" ");
        }
        for(j=1; j<10; j++){
            printf("%d", j);
    }
    printf("\n");
    } */
}
/* int nCount =1000;
for(; nCount > 400; nCount-=100){
printf("%d\t", nCount);
}
printf("\n"); */
/* int nCount =1;
for(printf("Now sorting the array…\n"); nCount < 
100; nCount ++)
printf("%d\n", nCount);
 */

/* for(nCount =0; nCount < 100; )
printf("%d", nCount ++);
 */
/* int count = 0;
for( count = 0; count < 20000000000; count++) 
; */
/* for( ; ; )
printf("This is an infinite loop\n"); */
/* int x = 1;
int count = 0;
do {
scanf("%d", &x);
if(x >= 0) count += 1;
} while(x >= 0);
 */




