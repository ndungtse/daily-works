#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
    FILE *fptr;
    char fname[20];
    char prevline[1201] = "";
    char buffer[1201];
    FILE *instream;
    char c;
    char holder[100]="";
    int nOfNames;
    int counter = 0;

    printf("input the name of your text file including its format: ");
    gets(fname);

    fptr = fopen(fname, "w");
    if (fptr == NULL)
    {
        printf(" Error in opening file!");
        exit(1);
    }

    printf("input the number of names you want to enter: ");
    scanf("%d", &nOfNames);

    printf(" Input %d names in the file %s : \n", nOfNames, fname);
    for (int i = 0; i < nOfNames + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fprintf(fptr, "%s", str);
    }
    fclose(fptr);
    printf("\n The file %s created successfully...!!\n\n", fname);

    printf("this what you have entered: \n");

    FILE *in = fopen(fname, "r");
    while ((c = fgetc(in)) != EOF)
        putchar(c);
    fclose(in);

    printf("\nComparing the inputs of your file");

    if ((instream = fopen(fname, "r")) == NULL)
    {
        printf("Unable to to open file %s\n", fname);
        exit(-1);
    }
    printf("\n%s:\n", fname);

    while (fgets(buffer, sizeof(buffer) - 1, instream) != NULL)
    {
        if (!strncmp(buffer, prevline, 4)){
            counter+=2;
            for (int i = 0; i < strlen(buffer); i++)
            {
                holder[i]=buffer[i];
            }
            }
            // printf("%.4s: %d", prevline, counter);
        strcpy(prevline, buffer);
    }
    fclose(instream);
    printf("%.4s: %d", holder, counter);

    return 0;
}
