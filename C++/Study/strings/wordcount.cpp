#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int count, count1, countWords;
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);
    int l = strlen(str);

    for (int i = 0; i < l; i++)
    {
        if(str[i]==' '){
            countWords++;
            cout << "Space" << endl;
        }
        count++;
    }

    count1 = count - countWords;
    cout << "Number of words in the string is: " << count1 << endl;
    cout << "Number of characters without spaces in the string is: " << countWords << endl;
    cout << "Number of characters with spaces in the string is: " << count << endl;
    
    return 0;
}

