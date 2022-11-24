#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {3, 34, 1, 22, 43, 2, 5, 7};
    int n = sizeof(arr) / sizeof(int);
    int temp;

    for (int i = 0; i < n - 1; i++)
    {

        // cout << arr[i] << endl;
        for (int j = 0; j < i; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int a = 0; a < n; a++)
    {
        cout << arr[a] << endl;
    }

    return 0;
}
