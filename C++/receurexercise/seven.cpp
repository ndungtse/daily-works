#include <iostream>
using namespace std;

string removeConsDup(string str, int i = 0)
{
    if (i == str.length())
        return "\0";
    if (str[i] == str[i + 1])
        str[i + 1] = '\0';
    return str[i] + removeConsDup(str, i + 1);
}

int main(int argc, char const *argv[])
{
    string str = "aaabbbcccddd";
    string leftstr = removeConsDup(str);
    cout << leftstr;
    return 0;
}
