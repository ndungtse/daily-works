#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);
    int l = strlen(str);

    for (int i = l - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
