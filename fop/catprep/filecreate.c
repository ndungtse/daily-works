#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char fname[81];
    char buffer[101];
    FILE *instream;

    instream = fopen("fname.txt", "w");

    if (instream == NULL)
    {
        printf("Unable to to open file %s\n", fname);
        exit(-1);
    }
    fprintf(instream, "Hello World");
    fclose(instream);
}