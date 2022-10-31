#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[] = {2,3,4,5,6,2,3,4,3,4,4,1,4,4,5,3};
    int len = sizeof(numbers) / sizeof(numbers[0]);
    int mostOccured;
    int nOccureence=0;
     
    for (int i = 0; i < len; i++)
    {
        int count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count > nOccureence)
        {
            nOccureence = count;
            mostOccured = numbers[i];
        }
    }

    cout << "Most occured number is: " << mostOccured<< " it occured "<<nOccureence << " times" << endl;
    
    return 0;
}
