#include <stdio.h>
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
   for(i=0; i<10; i++){
        for(j=10; j>i; j--){
           printf(" "); 
        }
        for ( k = 1; k < 9; k++)
        {
            printf("%d", k);
        }
        for ( l = i; l > 1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
   }


}

