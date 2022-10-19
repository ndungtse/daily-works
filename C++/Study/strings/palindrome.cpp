#include <iostream>

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
    char reverse[100];
    bool isPalindrome;

    cout << "Enter a string: ";
    cin.getline(str, 100);
    int l = strlen(str);

    for (int i = l - 1; i >= 0; i--)
    {
        reverse[l - i - 1] = str[i];
    }
    cout << "Reverse of the string is: " << reverse << endl;
    int l1 = strlen(reverse);

    for (int i = 0; i < l; i++)
    {
        if(reverse[i] == str[i]){
            isPalindrome = true;
        }else{
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout << "The string is a palindrome" << endl;
    }else{
        cout << "The string is not a palindrome" << endl;
    }
    
    return 0;
}
