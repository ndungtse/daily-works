#include <stdio.h>
#include <stdlib.h>

void main(){
    int studentid, subjects;
    double sub1, sum = 0, percentage, total;
    
    int marks[10] = {0};
    
    
    printf("Input a student code: ");
    scanf("%d", &studentid);
    printf("Enter number of subject :");
    scanf("%d", &subjects);
    /* printf("Enter Subject 1 marks : ");
    scanf("%lf", &sub1);
    printf("Enter Subject 2 marks : ");
    scanf("%lf", &sub2);
    printf("Enter Subject 3 marks : ");
    scanf("%lf", &sub3);
    printf("Enter Subject 4 marks : ");
    scanf("%lf", &sub4);
    printf("Enter Subject 5 marks : ");
    scanf("%lf", &sub5); */
   
    total = 100*subjects;
    for (int i = 1; i <= subjects; i++)
    {
        printf("Enter Subject %d marks : ", i);
        scanf("%lf", &sub1);
        sum += sub1;
    }

    percentage = sum*100/total;

    printf("STUDENT NUMBER: %d \n", studentid);
    printf("TOTAL MARKS OBTAINED: %lf/500 \n", sum);
    printf("PERCENTAGE: %lf%\n", percentage);
    

}
