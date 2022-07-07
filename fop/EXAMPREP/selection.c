

void selectionSort(int arr[], int size)
{
    int i, start, min_index, temp;
    for (start = 0; start < size - 1; start++)
    {
        // each iteration of the for loop is one pass
        // find the index of minimum element
        min_index = start;
        for (i = start + 1; i < size; i++)
            if (arr[i] < arr[min_index])
                min_index = i;
        // swap minimum element with element at start index
        temp = arr[start];
        arr[start] = arr[min_index];
        arr[min_index] = temp;
    }
}