#include <iostream>

using namespace std;

int main()
{
    int a[10] = {14, 5, 7, 12, 11, 10, 7, 8, 9, 15};
    int *ptr = a;
    cout << *(ptr + 5) << endl;
    cout << a << " " << &a << endl;
    return 0;
}