#include <iostream>
// #include <string.h>

using namespace std;

int strlen(char str[100])
{
    int length;
    for (int len = 0; str[len] != '\0'; len++)
    {
        length++;
    }
    return length;
}

int main(int argc, char const *argv[])
{
    char str[100];
    int i, l;

    cout << "Enter a string: ";
    cin.getline(str, 100);
    l = strlen(str);

    for (int i = 0; i < l; i++)
    {
        if(str[i]!=' '){
            cout << str[i];
        }
    }
    cout<< endl;
    
    return 0;
}
