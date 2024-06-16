#include<bits/stdc++.h>
using namespace std;

int main() {
    double number1, number2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter the First Number: ";
    cin >> number1;
    cout << "Enter the Second Number: ";
    cin >> number2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "Result: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "Result: " << number1 * number2 << endl;
            break;
        case '/':
            if (number2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Result: " << number1 / number2 << endl;
            }
            break;
        default:
            cout << "Operation does not exist.Please choose a valid operation." << endl;
    }
    return 0;
}

