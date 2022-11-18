#include <iostream>
using namespace std;

int digitSum(int n)
{
    if(n<0) return -1;
    return (n == 0) ? 0 : digitSum(n / 10) + n % 10;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
