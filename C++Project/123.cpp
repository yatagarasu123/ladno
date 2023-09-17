#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "Error: division by zero!" << endl;
            return 1; 
        }
        break;
    default:
        cout << "Error: Invalid operation!" << endl;
        return 1; 
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}