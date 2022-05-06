#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fs;
    fs = fopen("test.txt", "r");
    char buffer[256];
    int count = 1, lineNumber;

    // This is the variable which will store the line number
    // that you want to search
    lineNumber = 6;

    // this while loop goes on iterating over the file line by line
    while (fgets(buffer, sizeof(buffer), fs) != NULL)
    {

        // In case our counter variable matches up with the
        // Line Number that we need, then voila!
        if (lineNumber == count)
        {

            // Printing the line that got stored in the buffer
            printf("%s", buffer);

            // matching the first character in the array
            if (buffer[0] == 'a')
            {
                printf("Yeah! Quora is freaking awesome!\n");
            }
            else
            {
                printf("Damn you are a moron!\n");
            }

            // once found breaking out of the line reading loop
            break;
        }
        else
        {
            // in case it is not our required line
            // increament the counter
            count++;
        }
    }

    return 0;
}