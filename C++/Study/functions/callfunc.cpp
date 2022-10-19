#include <iostream>
#include <string.h>

double maximum(double x, double y, double z)
{
    double max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    return max;
}

int main(int argc, char const *argv[])
{
    double a, b, c, max;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    max = maximum(a, b, c);
    std::cout << "Maximum number is: " << max << std::endl;
    return 0;
}
