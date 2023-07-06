#include <iostream>
#include <string.h>
using namespace std;

int digitSum(int num)
{
    string str1 = to_string(num);
    int sum = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        int digit = str1[i] - '0';
        cout << "str[i] " << str1[i] << " digit " << digit << endl;
        sum += digit;
    }

    return sum;
}

int digSumRec(int n)
{
    string str1 = to_string(n);
    int sum = 0;

    if (str1.length() == 1)
    {
        return n;
    }
    else
    {
        int digit = str1[0] - '0';
        sum += digit;
        str1.erase(0, 1);
        int num = stoi(str1);
        return sum + digSumRec(num);
    }
}

int main(int argc, char const *argv[])
{
    int sumNum = digitSum(1235);
    cout << sumNum << endl;
    int sumNum2 = digSumRec(1235);
    cout << sumNum2 << endl;
    return 0;
}
