#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    `
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 + num2; 

            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero";
            } else {
                cout << num1 / num2;
            }
            break;
        default:
            cout << "Error: Invalid operator";  

    };

    return 0;
}
