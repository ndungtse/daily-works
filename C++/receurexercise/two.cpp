#include <iostream>
#include <string.h>

using namespace std;

string printChar(string str, int n = 0)
{
    int i = (str.length() - 1) - n;
    if (i < 0)
        return "\0";
    char ch = str[i];
    return ch + printChar(str, n + 1);
}

int main(int argc, char const *argv[])
{
    string str = "abc";
    string st = printChar(str);
    cout << st;
    return 0;
}
