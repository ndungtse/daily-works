#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // get user input and calculate sum

    int num1, num2, sum;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    sum = num1 + num2;

    cout << "The sum of "<<num1<<" and " << num2 <<" is: " << sum;
    return 0;
}
