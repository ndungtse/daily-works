#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 1;
    char q;
    string randomWord;

    while (n > 0 && randomWord != "q")
    {
        cout << "Type anything or type q to quit: " << endl;
        cin >> randomWord;
        cout << "you entered: " << randomWord << endl;
        // cout << "Do you want to continue? (y/n): ";
        // cin >> q;
        if (randomWord =="n")
        {
            break;
        }
    }

    return 0;
}
