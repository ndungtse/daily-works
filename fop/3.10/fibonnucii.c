#include <stdio.h >

int main(){
    int i,j, num=1;

    for(i=0; i<50; i+=num){
        num += i;
        printf("%d ", num);
        // }
    }
    return 0;
}