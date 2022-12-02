#include <iostream>
using namespace std;

string printChar(string str, int n=0)
{
    if(str[n] == '\0')
        return "\0";
    char ch = str[n] ;
    return ch + printChar(str, n+1);
}

int main(int argc, char const *argv[])
{
    string str = "abc";
    string st = printChar(str);
    cout << st ;
    return 0;
}
