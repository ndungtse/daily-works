#include <iostream>

using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            return 0;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << "Not found" << endl;
    return 0;
}