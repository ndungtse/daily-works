#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // print even number less than 100
    int n;
    cout << " this program print the even number less than 100  " << endl;
    n = 0;
    do {
        if ( n % 2 == 0) {
            cout << n << " ... ";
        }
        n++;
    } while (n < 100);
    return 0;
}
