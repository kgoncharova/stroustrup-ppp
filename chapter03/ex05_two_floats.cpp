#include "../lib_files/std_lib_facilities.h"

int main()
{
    double val1;
    double val2;

    cout << "Enter two floating-point numbers\n";
    cin >> val1 >> val2;

    if (val1 < val2)
        cout << val1 << " is the lesser\n"
             << val2 << " is the greater\n";
    if (val1 > val2)
        cout << val2 << " is the lesser\n"
             << val1 << " is the greater\n";

    cout << "Their sum is " << val1 + val2 << '\n'
         << "Their difference is " << val1 - val2 << '\n'
         << "Their product is " << val1 * val2 << '\n'
         << "Their ratio is " << val1 / val2 << '\n';
}
