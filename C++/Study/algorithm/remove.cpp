#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int scores[] = {52, 78, 68, 88, 63, 75, 90, 78};
    int k=3, n=9, j=k;

    while (j<n-1)
    {
        scores[j] = scores[j+1];
        j++;
    }

    n=n-1;

    for(int i=0; i<n; i++){
        cout << scores[i] << " ";
    }
    
    return 0;
}
