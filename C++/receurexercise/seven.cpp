#include <iostream>
using namespace std;

string removeConsDup(string str, int i = 0)
{
    int count = 1;
    bool isDup = true;
    if (i == str.length())
        return "\0";
    while (isDup)
    {
        bool isEqual = str[i] == str[i + 1];
        if (str[i] == str[i + count])
        {
            str[i + count] = '\0';
            count++;
        }
        else
            isDup = false;
    }

    return str[i] + removeConsDup(str, i + 1);
}

int main(int argc, char const *argv[])
{
    string str = "aabbcccdddd";
    string leftstr = removeConsDup(str);
    cout << leftstr;
    return 0;
}
