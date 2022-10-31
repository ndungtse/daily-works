#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N[3][4] = {{23,324,44,54},{21,12 ,21,},{21, 32,4,54}};

    //print all elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << N[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
