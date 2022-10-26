#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

float quandraticFomula(float a, float b, float c){
    float x1, x2;
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
    cout << "x1 = " << x1 << " x2 = " << x2 << endl;
    return 1;
}

int main(int argc, char const *argv[])
{
    quandraticFomula(1, 2, 1);
    return 0;
}
