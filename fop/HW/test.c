#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, k, z;
    int number;

    for (z = 10; z > 0; z++)
    {
       
        printf("Please input a number: ");
        scanf("%d", &number);
        if (number >= 1 && number <= 10000000000000)
        {

            for (i = 0; i < number; i++)
            {
                for (j = number; j >= i; j--)
                {
                    printf("  ");
                }
                for (k = 0; k <= i; k++)
                {
                    printf("* ");
                }

                printf("\n");
            }
        }
        else
        {
            exit(0);
        }
    }
}