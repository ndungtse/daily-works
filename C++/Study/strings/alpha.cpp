#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char input;

    cout << "enter a character" << endl;
    cin >> input;
    if(isalpha(input)){
        cout << "the charecter is an alphabet" << endl;
    }else {
        cout << "the charecter is not an alphabet" << endl;
    }
    return 0;
}
