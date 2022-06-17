#include<stdio.h>
#include<stdlib.h>

void main(){
    const float MIN_SALARY = 2000.00;
    const float HEALTH_INSURANCE = MIN_SALARY * 0.05;
    const float ALLOWANCE = MIN_SALARY * 0.05;

    int numOfDevs;
    float income;
    float gross_salary = MIN_SALARY;

    printf("Enter the number of developers for this month:");
    scanf("%d", &numOfDevs);

    printf("Enter the company's income for this month:");
    scanf("%f", &income);

    if(income < (MIN_SALARY*numOfDevs)){
        printf("The income for this month is not sufficient to pay all the developers\n");
        exit(0);
    }
    const float GROSS_BONUS = income * 0.07;


    //Adding the BONUS
    gross_salary += (GROSS_BONUS/numOfDevs);

    //Adding the health insurance
    gross_salary += HEALTH_INSURANCE;

    //Adding the allowance
    gross_salary += ALLOWANCE;

    printf("The Gross Salary for each Dev is USD %.2f\n", gross_salary);

    //Removing the tax
    float tax = (gross_salary*0.15)*numOfDevs;

    printf("The total Tax to deduct from all devs is %.2f\n", tax);

}