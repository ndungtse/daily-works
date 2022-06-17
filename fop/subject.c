#include <stdio.h>
#include <stdlib.h>
void main(){
    int studentid, subjects, total;
    double marks, sum = 0, percentage;
    printf("Input a student code: ");
    scanf("%d", &studentid);
    printf("Enter number of subject :");
    scanf("%d", &subjects);
    total = 100*subjects;
    for (int i = 1; i <= subjects; i++)
    {
        printf("Enter Subject %d marks /100 : ", i);
        scanf("%lf", &marks);
        if(marks>100){
            printf("Thanks for lying your marks or maybe you entered wrong marks /100\n");
            printf("Rerun the program and try again");
            exit(0);
        }else{
            sum += marks;
        }
    }
    percentage = sum*100/total;
    printf("==========Output==========\n");
    printf("STUDENT NUMBER: %d \n", studentid);
    printf("TOTAL MARKS OBTAINED: %.0lf/%d \n", sum,total);
    printf("PERCENTAGE: %.2lf%%\n", percentage);
}