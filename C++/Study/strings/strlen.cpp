#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int length;
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int len = 0; str[len] != '\0'; len++)
    {
        length++;
    }

    cout << "Length of the string is: " << length << endl;
    return 0;
}
