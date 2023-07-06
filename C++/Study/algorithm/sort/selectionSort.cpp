#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallestNumberIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallestNumberIndex])
            {
                smallestNumberIndex = j;
            }
        }
        swap(&a[i], &a[smallestNumberIndex]);
    }
}

int main(int argc, char const *argv[])
{
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> a[i];
    }
    selectionSort(a, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
