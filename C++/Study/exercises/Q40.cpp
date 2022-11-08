#include <iostream>
#include <array>
using namespace std;

int isDaphne(int a[], int len)
{
    int odd = 1;
    int even = 1;
    for (int i = 0; i < len; i++)
    {
        if (a[i]%2== 0)
        {
            even  = 0;
        } else {
            odd = 0;
        }
    }

    if (odd == 0 && even == 0)
    {
        return 0;
    } else {
        return 1;
    }  
}

int main(int argc, char const *argv[])
{
    int balance[5] = {1000, 2, 50};
    int daphine = isDaphne(balance, 4);
    cout << daphine << endl;
    return 0;
}
