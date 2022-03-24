#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int randomNumber(){
    return (rand()%50)+10;
}

void main(){
    srand(time(0));
    int arr[4][5];
    int x, i, j;
    
    //Building the array and displaying it
    for(i=0; i < 4; i++){
        for(j=0; j<5; j++){
            arr[i][j] = randomNumber();
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //Getting x from the user
    printf("Type in the value of x:");
    scanf("%d", &x);
    printf("\n");
    printf("\n");

    for(i=0; i < 4; i++){
        for(j=0; j<5; j++){
            if(arr[i][j] < x){
                arr[i][j] = 100;
            }
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

}
