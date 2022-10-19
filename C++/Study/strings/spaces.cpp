#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[100];
    int i, j, k, l;
    int count = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << "Number of spaces in the string is: " << count << endl;
    return 0;
}
