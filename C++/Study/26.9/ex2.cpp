#include <iostream>
#include <string>

//calculate interest rate

int calculateInterest(int amount, int rate, int years)
{
    int interest = amount * rate * years;
    return interest;
}

int main()
{
    using namespace std;
    string name;
    string lastname;
    int amount;
    int rate;
    int years;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "Enter your amount: ";
    cin >> amount;
    cout << "Enter your rate: ";
    cin >> rate;
    cout << "Enter your years: ";
    cin >> years;
    cout << "Your name is: " << name << " " << lastname << " and your interest is: " << calculateInterest(amount, rate, years) << endl;
    return 0;
}