#include <iostream>
using namespace std;
int main()
{
    int iteration, j, temp, n = 9;
    int num[n] = {5, 7, 8, 1, 2, 6, 3, 4, 9};
    cout << " The unsorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "\t";
    }
    cout << endl;
    for (iteration = 1; iteration < n; iteration++)
    {
        cout << "Iteration=" << iteration << endl;
        int check = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (num[j + 1] < num[j])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                check = 1;
            }
            cout << endl;
            cout << "J=" << j << endl;
            for (int k = 0; k < n; k++)
            {
                cout << num[k] << "\t";
            }
            cout << endl;
        }
        if (check == 0)
        {
            break;
        }
    }
    cout << "The sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "\t";
    }
    cout << endl;

    return 0;
}
