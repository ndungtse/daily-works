#include <iostream>
#include <cmath>
using namespace std;

int strToInt(string str, int n = 0)
{
    int i = (str.length() - 1) - n;
    if (i < 0)
        return 0;
    int num = int(str[i]) - 48;
    int placeValue = pow(10, n);
    return num * placeValue + strToInt(str, n + 1);
}

int main(int argc, char const *argv[])
{
    string strnum = "512";
    int num = strToInt(strnum);
    cout << num;
    return 0;
}
