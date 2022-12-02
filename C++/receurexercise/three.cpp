#include <iostream>
using namespace std;

string removeChar(string str, char target, int i = 0)
{
    if (str[i] == target)
        str[i] = '\0';

    if (i == str.length())
        return "";
    char ch = str[i];
    return ch + removeChar(str, target, i + 1);

}

int main(int argc, char const *argv[])
{
    string str = "abacada";
    string strremov = removeChar(str, 'b');
    cout << strremov ;
    return 0;
}
