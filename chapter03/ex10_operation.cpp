#include "../lib_files/std_lib_facilities.h"

int main()
{
    string operation;
    double val1;
    double val2;
    double result = 0;

    cout << "Enter an operation (+, -, *, /, plus, minus, mul, div) and two numbers\n";
    cin >> operation >> val1 >> val2;

    if (operation == "+" || operation == "plus")
        result = val1 + val2;
    else if (operation == "-" || operation == "minus")
        result = val1 - val2;
    else if (operation == "*" || operation == "mul")
        result = val1 * val2;
    else if (operation == "/" || operation == "div")
        result = val1 / val2;

    cout << "The result of your operation is " << result << '\n';
}
