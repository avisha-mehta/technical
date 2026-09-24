#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double a, b, result;

    do
    {
        cout << "\n--- ADVANCED CALCULATOR ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Percentage\n";
        cout << "8. Sine\n";
        cout << "9. Cosine\n";
        cout << "10. Second Consequence\n";
        cout << "11. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                result = a + b;
                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                result = a - b;
                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                result = a * b;
                cout << "Result = " << result << endl;
                break;

            case 4:
                cout << "Enter dividend: ";
                cin >> a;
                cout << "Enter divisor: ";
                cin >> b;

                if (b != 0)
                {
                    result = a / b;
                    cout << "Result = " << result << endl;
                }
                else
                {
                    cout << "Division by zero is not possible.\n";
                }
                break;

            case 5:
                cout << "Enter base: ";
                cin >> a;
                cout << "Enter exponent: ";
                cin >> b;
                result = pow(a, b);
                cout << "Result = " << result << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> a;

                if (a >= 0)
                {
                    result = sqrt(a);
                    cout << "Result = " << result << endl;
                }
                else
                {
                    cout << "Square root of a negative number is not possible.\n";
                }
                break;

            case 7:
                cout << "Enter the number: ";
                cin >> a;
                cout << "Enter the percentage: ";
                cin >> b;
                result = (a * b) / 100;
                cout << b << "% of " << a << " = " << result << endl;
                break;

            case 8:
                cout << "Enter the angle in degrees: ";
                cin >> a;
                result = sin(a * M_PI / 180.0);
                cout << "Sine = " << result << endl;
                break;

            case 9:
                cout << "Enter the angle in degrees: ";
                cin >> a;
                result = cos(a * M_PI / 180.0);
                cout << "Cosine = " << result << endl;
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> a;
                result = a * a;
                cout << "Second consequence = " << result << endl;
                break;
   
             case 11:
                cout << "Calculator closed.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 11);

    return 0;
}