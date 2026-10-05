#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter expression (e.g. 10 + 5): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            if (b == 0)
                cout << "Cannot divide by zero";
            else
                cout << (double)a / b;
            break;

        case '%':
            if (b == 0)
                cout << "Cannot modulo by zero";
            else
                cout << a % b;
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}