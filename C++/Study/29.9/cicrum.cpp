#include <iostream>

using namespace std;
#define PI 3.1415926

int calculateCircumference(int r)
{
    return 2 * PI * r;
}

int main()
{
    int radius;
    cout << "Please input the radius: ";
    cin >> radius;
    cout << "The circumference is: " << calculateCircumference(radius) << endl;
}