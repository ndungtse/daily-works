#include <iostream>
#include <string>
#include <array>
#include <string.h>

using namespace std;



int main(int argc, char const *argv[])
{
    int numbers[7];
    int number = 2345333;
    int len = sizeof(numbers) / sizeof(int);
    int length = 1;
    
    int x = 234567545;
    while (x /= 10)
        length++;

    char numberss[7];

    for (int i = 0; i < len; i++)
    {
        numberss[i] = numbers[i];
        // cout <<  number << endl;
    }
    for (int i = 0; i < len; i++)
    {
        cout << numberss[i] << endl;
    }
    
    
    int mostOccured;
    int nOccureence = 0;

    // for (int i = 0; i < len; i++)
    // {
    //     int count = 1;
    //     for (int j = i + 1; j < len; j++)
    //     {
    //         if (numbers[i] == numbers[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > nOccureence)
    //     {
    //         nOccureence = count;
    //         mostOccured = numbers[i];
    //     }
    // }

    // cout << "Most occured number is: " << mostOccured << " it occured " << nOccureence << " times" << endl;

    return 0;
}
