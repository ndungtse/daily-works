#include <iostream>
using namespace std;

int createArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int len;
    cout << "Enter length of array: ";
    cin >> len;
    int numbers[len];
    createArray(numbers, len);
    int mostOccurred;
    int nOccurrence = 0;

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
        if (count > nOccurrence)
        {
            nOccurrence = count;
            mostOccurred = numbers[i];
        }
    }

    cout << "Most occurred number is: " << mostOccurred << " it occurred " << nOccurrence << " times" << endl;

    return 0;
}