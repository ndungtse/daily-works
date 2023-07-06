#include <iostream>

void printArray(int arr[], int len)
{
    std::cout << "Iteration=" << std::endl;
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}

void insertionSort(int arr[], int len)
{
    int i, j, key;
    for (i = 1; i < len; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            // std::cout << "J=" << j << std::endl;
            // printArray(arr, len);
        }
        arr[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{
    int numbers[10] = {5, 7, 8, 1, 2, 6, 3, 4, 9, 10};
    insertionSort(numbers, 10);
    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers[i] << "\t";
    }
    std::cout << std::endl;
    return 0;
}