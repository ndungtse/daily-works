#include <iostream>
using namespace std;

int strlen(char arr[], int i=0)
{
    if(arr[i] ==  '\0')
        return i;
    return strlen(arr, i+1);
}

int main(int argc, char const *argv[])
{
    char str[7] = "";
    int size = strlen(str);
    cout << size;
    return 0;
}
