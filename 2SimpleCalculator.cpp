#include <iostream>

using namespace std;

int main() {
    char op;
    double num1;
    double num2;
    double result;

    cout << "************************** Calculator **************************" << endl;

    cout << "Enter one (+ - * /): ";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "The result after adding the numbers is: " << result << endl;
            break;
        case '-':
            result =  num1 - num2;
            cout << "The result after substracting the numbers is:  " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The result after multyplying the numbers is: " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "The result after dividing the two numbers is: " << result << endl;
            break;
        default:
            cout << "That was not a valid operator." << endl;
            break;
    }


    cout << "****************************************************************" << endl;

    return 0;
}