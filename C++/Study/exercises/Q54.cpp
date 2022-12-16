#include <iostream>
using namespace std;

int isBean(int a[], int len)
{
    bool isNine = false;
    bool isThirteen = false;
    bool isSixteen = false;
    bool isSeven = false;

    for (int i = 0; i < len; i++)
    {
        if (a[i] == 9)
            isNine = true;
        else if (a[i] == 13)
            isThirteen = true;
        else if (a[i] == 16)
            isSixteen = true;
        else if (a[i] == 7)
            isSeven = true;
    }

    bool isSevenSixteen = isSeven && isSixteen;
    bool isNineThirteen = isNine && isThirteen;
    
    return !isSevenSixteen && isNineThirteen;
}

int main(int argc, char const *argv[])
{
    int test1[] = {1, 2, 3, 9, 6, 13};
    int test2[] = {3, 4, 6, 7, 13, 15};

    if (isBean(test2, 6))
        cout << "test2 is Bean" << endl;
    else
        cout << "test2 is not Bean" << endl;
    return 0;
}
