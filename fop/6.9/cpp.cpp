#include <iostream>
using namespace std;

int main() {
    char setOperator;
    float firstNum = 0.00, secondNum = 0.00;
    cout << "Enter your operater: +, -, *, /:  \n";
    cin >> setOperator;
    cout << "Enter your first calculation:  \n";
    cin >> firstNum;
    cout <<  "Enter your second calculation:  \n";
    cin >> secondNum;
    
    switch(setOperator) {
        case '+':
        cout << "The answer is: " <<firstNum + secondNum;
        break;
        
        case '-':
        cout << "The answer is:" << firstNum - secondNum;
        break;
        
        case '*':
        cout << "The answer is: " << firstNum * secondNum;
        break;
        
        case '/':
        cout << "The answer is: " << firstNum / secondNum;
        break;
    }
    cout << endl;
    return 0;
}