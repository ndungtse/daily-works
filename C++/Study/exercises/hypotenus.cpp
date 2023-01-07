#include <iostream>
#include <cmath>
#include <typeinfo>
#include <array>

using namespace std;

int calcIntHypotenus(int a, int b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

float calcFloatHypotenus(int a, int b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

bool alreadyFound(int arr[], int n, int target)
{
    if (n < 0)
        return false;
    if (arr[n] == target)
        return true;
    return alreadyFound(arr, n - 1, target);
}

int main(int argc, char const *argv[])
{
    int a, b, c, count = 0;
    int n = 10;
    // array<int, 100> sum = [];
    int sum[100];

    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            int sumSquare = pow(i, 2) + pow(j, 2);
            if (calcIntHypotenus(i, j) == calcFloatHypotenus(i, j))
            {
                bool isFound = alreadyFound(sum, count + 1, sumSquare);
                if (!isFound)
                {
                    sum[count] = sumSquare;
                    cout << "(" << i << " , " << j << +")" << endl;
                    count++;
                }
            }
        }
    }

    // for (int i = 0; i < count; i++)
    // {
    //     cout << sum[i] << " , ";
    // }
    
    return 0;
}
