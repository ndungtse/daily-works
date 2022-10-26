#include <iostream>
#include <string.h>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "===================== MENU =====================" << endl;
    cout << "1. Add" << endl;
    cout << "2. Substract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. divide" << endl;
    int choice;
    cout << "> ";
    cin >> choice;

    cout << "Enter your first number: ";
    float num1, num2;
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;
    
    // error message to prevent user from doing a division by zero
    if (choice == 4 && num2 == 0) {
        cout << "Cannot divide by zero" << endl;
        return 0;
    }

    switch(choice) {
        case 1: 
            cout << "The answer is: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The answer is: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "The answer is: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "The answer is: " << num1 / num2 << endl;
            break;        
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
