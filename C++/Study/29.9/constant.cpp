#include <iostream>
using namespace std;
#define PI 3.1415926
int main()
{
    const int i = 10;
    int *p = (int *)&i;
    *p = 20;
    cout << "i = " << i << endl;

    const double d = 3.14;
    double area = PI * d * d;
    cout << "area = " << area << endl;
    return 0;
}