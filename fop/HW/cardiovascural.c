#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main()
{
    int age, points = 0;
    char res, Y='Y',N='N';

    printf("Enter your age: ");
    scanf("%d", &age);

    bool under = (age < 20);

    if (age < 20)
    {
        points++;
        goto smoke;
    }

    else if (age >= 20 && age < 30)
    {
        points += 2;
        goto smoke;
    }
    else
    {
        points += 3;
        goto smoke;
    }

smoke:
    printf("Do you smoke?(Y/N): \n");
    scanf("%c", res);
    if (res == 'Y')
    {
        points += 4;
        goto pressure;
    }
    else
    {
        goto pressure;
    }

pressure:
    printf("Do you have bloode pressure?(Y/N): \n");
    scanf("%c", res);

    if (res == 'Y')
    {
        points += 2;
        goto fat;
    }
    else
    {
        goto fat;
    }

fat:
    printf("Do you eat high fat food?(Y/N): \n");
    scanf("%c", res);
    if (res == 'Y')
    {
        points++;
        goto results;
    }
    else
    {
        goto results;
    }

results:
    printf("Your total points is %d points", points);
    exit(0);
}
