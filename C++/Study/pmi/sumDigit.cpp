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
        cout << "str[i] "<< str1[i] << " digit " << digit << endl;
        sum += digit;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int sumNum = digitSum(1235);
    cout << sumNum << endl;
    return 0;
}
