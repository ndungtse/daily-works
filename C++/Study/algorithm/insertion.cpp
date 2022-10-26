#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int scores[] = {52, 78, 68, 88, 63, 75, 90, 78};
    int item = 10, k=9, len=9, j=len-1;

    while (j >= k)
    {
        scores[j+1] = scores[j];
        j--;
    }
    scores[k] = item;

    for (int i = 0; i < 20; i++)
    {
        cout << scores[i] << " ";
    }
    return 0;
}
