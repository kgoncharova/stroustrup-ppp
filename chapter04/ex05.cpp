#include "../lib_files/std_lib_facilities.h"

int main()
{
    double val1 = 0;
    double val2 = 0;
    double result = 0;
    char operation;

    cout << "Enter two values and an operation ('+', '-', '*', '/')" << endl;

    while (cin >> val1 >> val2 >> operation) {
        switch (operation) {
            case '+':
                result = val1 + val2;
                cout << "The sum of " << val1 << " and " << val2 
                     << " is " << result << endl;
                break;
            case '-':
                result = val1 - val2;
                cout << "The difference of " << val1 << " and " << val2 
                     << " is " << result << endl;
                break;
            case '*':
                result = val1 * val2;
                cout << "The product of " << val1 << " and " << val2 
                     << " is " << result << endl;
                break;
            case '/':
                if (val2 == 0)
                    cout << "Error! Division by zero!" << endl;
                else {
                    result = val1 / val2;
                    cout << "The division of " << val1 << " and " << val2 
                         << " is " << result << endl;
                }
                break;
            default:
                cout << "Error! Enter an operation operation ('+', '-', '*', '/')"
                     << endl;
        }

        cout << "Enter two values and an operation ('+', '-', '*', '/')" << endl;
    }

    return 0;
}
