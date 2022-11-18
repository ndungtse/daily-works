#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *ptr = 0;
    int r = 30;
    *ptr = r;

    cout << "Value of r = " << r << endl;
    return 0;
}
