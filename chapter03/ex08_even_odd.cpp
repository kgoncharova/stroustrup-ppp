#include "../lib_files/std_lib_facilities.h"

int main()
{
    int number;

    cout << "Enter integer number\n";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The value " << number << " is an even number.\n";
    }
    else {
        cout << "The value " << number << " is an odd number.\n";
    }
}
