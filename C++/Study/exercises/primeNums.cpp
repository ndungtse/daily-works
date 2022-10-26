#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // pprint prime number less than 100
    int n, i, j = 0;
    cout << " this program print the prime number less than 100 " << endl;

    n = 0;

    do {
        n++;
        int np = 0;
        for ( i=1; i<=n; i++ ) {
            if ( (float) n/i == (int) n/i  ) {
                np ++;
            }
        }
        if ( np == 2 ) { j++; cout << n << " is prime " << " (" << j << ") " << " and ..." << endl;}
    } while (n < 100);
    return 0;
}
