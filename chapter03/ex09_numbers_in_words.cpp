#include "../lib_files/std_lib_facilities.h"

int main()
{
    string number;
    string result;

    cout << "Enter spell out number from zero to four\n";
    cin >> number;

    if (number == "zero")
        result = "0";
    else if (number == "one")
        result = "1";
    else if (number == "two")
        result = "2";
    else if (number == "three")
        result = "3";
    else if (number == "four")
        result = "4";
    else
        result = "not a number I know!\n";

    cout << "Your value is " << result << '\n';
}
