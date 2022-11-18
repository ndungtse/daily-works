#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;

    cout << "a=" << a << endl;  
    
    return 0;
}