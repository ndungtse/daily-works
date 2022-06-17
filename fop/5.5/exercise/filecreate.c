#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char fname[81];
    char buffer[101];
    FILE *instream;
    int n;
    int i;

    instream = fopen("fname.txt", "w");

    if (instream == NULL)
    {
        printf("Unable to to open file %s\n", fname);
        exit(-1);
    }
    printf("Enter a number of lines you want to enter: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter a line: ");
        gets(buffer);
        fprintf(instream, "%s\n", buffer);
    }

    fprintf(instream, "Hello World\n");
    fputs("How y'all doing", instream);
    fclose(instream);
}