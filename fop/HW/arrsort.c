#include <stdio.h>
int main()
{

     int ara[1000];
     int high;
     printf("How many numbers are you going to enter ? (max:1000) : ");
     scanf("%d", &high);
     int i, j, min;
     printf("\n");
     for (i = 0; i < high; i++)
     {
          printf("Type number : ");
          scanf("%d", &ara[i]);
     }
     printf("\n The numbers arranged in ascending order are : \n");
     for (i = 0; i < high; i++)
     {
          for (j = i; j < high; j++)
          {
               if (ara[i] > ara[j])
               {
                    min = ara[i];
                    ara[i] = ara[j];
                    ara[j] = min;
               }
          }
          // The numbers arranged in ascending order are
          printf("%d\n", ara[i]);
     }
     return 0;
}