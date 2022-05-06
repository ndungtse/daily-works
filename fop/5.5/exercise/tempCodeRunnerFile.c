#include <stdio.h>
int main()
{
    FILE *in = fopen("test.txt", "r");
    char c;
    while ((c = fgetc(in)) != EOF)
        putchar(c);
    fclose(in);
    return 0;
}