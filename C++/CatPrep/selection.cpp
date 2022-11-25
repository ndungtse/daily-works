#include <iostream>
using namespace std;

export void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int targetIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[targetIndex])
            {
                targetIndex = j;
            }
        }
        swap(a[i], a[targetIndex]);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
