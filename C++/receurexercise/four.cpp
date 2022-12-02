#include <iostream>
using namespace std;

string removeChar(string str, char target, char replace, int i = 0)
{
    if (str[i] == target)
        str[i] = replace;

    if (i == str.length())
        return "";
    char ch = str[i];
    return ch + removeChar(str, target, replace, i + 1);
}

int main(int argc, char const *argv[])
{
    string str = "abacada";
    string strremov = removeChar(str, 'b', 'y');
    cout << strremov;
    return 0;
}
