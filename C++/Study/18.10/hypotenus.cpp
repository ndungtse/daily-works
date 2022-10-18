#include <iostream>
#include <cmath>
#include <typeinfo>

using namespace std;

int calcHypotenus (int a, int b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    int n = 10;

    // cout <<typeid(n).name()<<endl;
    // cout <<typeid(32.343).name()<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(typeid(sqrt(pow(i, 2) + pow(j, 2))).name() == typeid(1).name()){
                cout << "i: " << i << " j: " << j << " c: " << calcHypotenus(i,j) << endl;
            }
            int sumsqr = (pow(i, 2) + pow(j, 2));
            cout << "i: " << i << " j: " << j << " sumsqr: "<< sumsqr << " c: " << sqrt(sumsqr) << endl;
            cout << typeid(sqrt(sumsqr)).name() << endl;
        }

    }
    
    return 0;
}
