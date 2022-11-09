#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int isDigitSum(int arr[])
{
    int arg1 = arr[0];
    int arg2 = arr[1];
    string str1 = to_string(arg1);
    int sum = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        int digit = str1[i] - '0';
        sum += digit;
    }
    if (sum < arg2)
    {
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {123, 21};
    bool isdigitSum = isDigitSum(arr);
    cout << isdigitSum << endl;
    return 0;
}
