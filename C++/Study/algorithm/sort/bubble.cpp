#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j, n=4, temp;
    int num[n] = {14, 44, 5, 18};

    for ( i = 0; i < n; i++)
    {
        cout << "Iteration: " << i;
        for(j=0; j<n-1; j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
            cout << endl;
            cout << "j= " << j <<endl;
            for (int p=0; p<n; p++)
            {
                cout << num[p] << "\t";
            }
            cout << endl;
        }
    }

    cout << "THE SORTED ARRAY IS: " << endl;
    for(int k=0; k<4; k++){
        cout << num[k] << "\t";
    }
    
    return 0;
}
