#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[100];
    
    cout << "Enter a string" << endl;
    cin.getline(str, 100);

    int l = strlen(str);

    for (int i = 0; i < l; i++)
    {
        if(int(str[i])>=97 && int(str[i])<=122){
            str[i] = char(int(str[i])-32);
        }

    }

    cout << "The string in uppercase is: " << str << endl;
    
    return 0;
}
