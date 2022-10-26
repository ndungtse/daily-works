#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // calculate volume of sphere program
    float r, vol = 0, PI = 3.1415;
    int radius;

    cout << " this program is to calculate a volume of sphere " << endl;
    cout << " enter radius of sphere " << endl;
    cin >> r;
    vol = (4*PI*pow(r,3))/3;

    cout << "the volume is " << vol << endl;
    return 0;
}
