#include <iostream>
#include <string.h>

using namespace std;

int swap(int *a, int *b){
    int temp = *a;
    a = b;
    b= &temp;
    return 1;
}

int main(int argc, char const *argv[])
{
    int a, b;

    // swapping number program
    cout << "Enter the two numbers you want to switch places: ";
    cin >> a >> b;
    swap(a,b); 

    // a = a + b;
    // b = a - b;
    // a = a - b;
    cout << "a = " << a << " b = " << b;
    return 0;
}
