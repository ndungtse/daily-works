#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    cout << *ptr << endl;
    cout << *(arr) << endl;
    cout << *(arr+1) << endl;
    return 0;
}

