#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   char n1[100], n2[100], n3[100];int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("D:\\program.bin","rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

//    for(n = 1; n < 5; ++n)
//    {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//    }
   fclose(fptr); 
  return 0;
}