#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int postiveNumber;
    int n;
    int average;
    int sum;
    
    cout << "How many numbers do you want to enter: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "You entered a negative number. Please enter a positive number : ";
        cin >> n;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number "<< i+1 << endl;
        cin >> postiveNumber;
        if(postiveNumber == 1) return 0;
        while(postiveNumber < 0)
        {
            cout << "You entered a negative number. Please enter a positive number " << i << endl;
            cin >> postiveNumber;
        }
        sum += postiveNumber;
    }
    average = sum / n;
    cout << "The average is: " << average << endl;

    return 0;
}
