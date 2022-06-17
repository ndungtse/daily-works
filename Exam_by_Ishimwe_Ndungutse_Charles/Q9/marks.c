#include <stdio.h>
#include <stdlib.h>
void main()
{

    char firstname[30];
    char lastname[30];

    int studentId, subjects, total;
    double marks, sum = 0, percentage;

    printf("==================== input ========================\n");

    printf("Input a student code: ");

    scanf("%d", &studentId);

    printf("Enter your Names (firstname , lastname): \n");

    scanf("%29s%*[^,], %29s", lastname, firstname);

    printf("Enter number of subject :");

    scanf("%d", &subjects);

    total = 100 * subjects;

    for (int i = 1; i <= subjects; i++)
    {
        printf("Enter Subject %d marks /100 : ", i);
        scanf("%lf", &marks);
        if (marks > 100)
        {
            printf("The maximum marks is 100\n");
            printf("Please run again the program and try again.\n");
            exit(0);
        }
        else
        {
            sum += marks;
        }
    }
    percentage = sum * 100 / total;
    printf("==========Output==========\n");
    printf("Student: %s %s ID: %d \n", firstname, lastname, studentId);
    printf("Has Obtained: %.0lf/%d \n", sum, total);
    printf("Percentage: %.1lf%%\n", percentage);
}