#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

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

int getEMI(float loanAmount, float loanDuration, float loanRate)
{
    float T = loanDuration * 12;
    float R = loanRate / (12 * 100);
    // float EMI = loanAmount * (loanRate / 1200) * (pow(1 + (loanRate / 1200), loanDuration)) / (pow(1 + (loanRate / 1200), loanDuration) - 1);
    float EMI = loanAmount * R * pow(1 + R, T) / (pow(1 + R, T) - 1);
    return EMI;
}

int main()
{
    struct Person p1;

    printf("Enter the name of the person: ");
    scanf("%[^\n]%*c", p1.name);
    printf("Entered name: %s\n", p1.name);

    printf("Enter the address: ");
    scanf("%[^\n]%*c", p1.address);
    printf("Entered address: %s\n", p1.address);

    printf("Enter the DoB in the format dd/mm/yyyy: ");
    scanf("%[^\n]%*c", p1.DoB);
    printf("Entered date of birth: %s\n", p1.DoB);

    printf("Enter gender: ");
    scanf("%c", &p1.gender);
    printf("Entered gender: %c\n", toupper(p1.gender));

    printf("Enter the principle amount: ");
    scanf("%f", &p1.loanAmount);
    printf("Entered principle amount: %.2f\n", p1.loanAmount);

    printf("Enter the payment time in years: ");
    scanf("%f", &p1.loanDuration);
    printf("Entered payment time: %.1f years\n", p1.loanDuration);

    printf("Enter the loan rate: ");
    scanf("%f", &p1.loanRate);
    printf("Entered loan rate: %.1f\n", p1.loanRate);

    printf("\n\n");

    printf("Borrower basic information:\n");
    printf("=========================================================\n");
    printf("\n\n");
    printf("Name: %s\n", p1.name);
    printf("Address: %s\n", p1.address);
    printf("Date of birth: %s\n", p1.DoB);
    printf("Gender: %c\n", toupper(p1.gender));

    printf("\n\n");

    printf("Payment information \n");
    printf("===========================================================\n");
    printf("\n\n");

    float T = p1.loanDuration * 12;
    float EMI = getEMI(p1.loanAmount, p1.loanDuration, p1.loanRate);
    printf("Monthly EMI is RWF %.3f\n", EMI);
    printf("Total amount to be paid is in %.1f months is RWF %.3f\n", T, EMI * T);
    return 0;
}
