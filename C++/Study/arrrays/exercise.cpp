#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[10] = {12, 12, 6, 4, 9, 3, 28, 52, 11, 41};
    int max = numbers[0];
    int min = numbers[0];
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }

        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}
