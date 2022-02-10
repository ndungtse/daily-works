#include <stdio.h>
void main(void){
int iNum = 0;
int nSum = 0;
int nSum2 = 0;
for(iNum = 2, nSum=0, nSum2 =0; iNum <= 20; iNum = iNum + 2){
    nSum = nSum + iNum;
    nSum2 = nSum2 + iNum * iNum;
}
printf("Sum of the first 20 even natural numbers: %d\n", nSum);
printf("Sum of the square for the first 20 even natural numbers: %d\n", nSum2);
}