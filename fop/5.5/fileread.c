#include <stdio.h>
#include <stdlib.h>

void main()
{
    char fname[81];
    char buffer[101];
    FILE *instream;

    printf("show file: ");
    scanf("%80s", fname);

    if ((instream = fopen(fname, "r")) == NULL)
    {
        printf("Unable to open file %s\n", fname);
        exit(-1);
    }
    printf("\n%s: ", fname);

    while (fgets(buffer, sizeof(buffer) - 1, instream) != NULL)
        fputs(buffer, stdout);

    fclose(instream);
}