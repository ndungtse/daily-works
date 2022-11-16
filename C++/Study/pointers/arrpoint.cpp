#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float arr[10];
    float *ptr ;

    cout << "Displaying address using array name" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Address of arr[" << i << "] = " << &arr[i] << endl;
    }

    cout << "\n\n";

    ptr = arr;
    cout << "Displaying address using pointer" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Address of ptr + " << i << " = " << ptr + i << endl;
    }


    return 0;
}
