#include <stdio.h>
#include <stdlib.h>

void main(){
    double salary = 2000,workers,insurance,allowance, income, bonus ,gross, tax;

    printf("Enter total income of this month: ");
    scanf("%lf",&income);
    printf("Enter number of workers worked this month: ");
    scanf("%lf",&workers);

    int test = income*7/100;
    bonus = test*workers;
    insurance = salary*5/100;
    allowance = salary*5/100;
    gross = salary+bonus;
    tax = (gross*15/100)*workers;


    printf("BONUS is: %lf\n", bonus);
    printf("insurance is: %lf\n", insurance);
    printf("tax is: %lf\n", tax);
    printf("allowance is: %lf\n", allowance);
    printf("The gross salary of every worker is: %lf\n", gross);
    printf("The total tax deducted from all developers' salaries is: %lf\n", tax);



    

}