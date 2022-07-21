#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[100];
    float loanAmount;
    float loanDuration;
    float loanRate;
    float EMI;
    char address[100];
    char DoB[100];
    int TLP;
    char gender;
};

int main()
{
   int n;
   struct Person p1;
   FILE *fptr;

   if ((fptr = fopen("program.bin","rb")) == NULL){
       printf("Error! opening file");
       exit(1);
   }

//    for(n = 1; n < 5; ++n)
//    {
      fread(&p1, sizeof(struct Person), 1, fptr); 
    //   printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
      printf("%s\n", p1.name);
        printf("%f\n", p1.loanAmount);
        printf("%f\n", p1.loanDuration);
        printf("%f\n", p1.loanRate);
        printf("%f\n", p1.EMI);
        printf("%s\n", p1.address);
        printf("%s\n", p1.DoB);
        printf("%d\n", p1.TLP);
        printf("%c\n", p1.gender);
//    }
   fclose(fptr); 
  return 0;
}