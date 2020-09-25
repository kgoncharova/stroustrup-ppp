#include "../lib_files/std_lib_facilities.h"

int main()
{
    double a = 0;
    double a_conv = 0;
    double smallest = 0;
    double largest = 0;
    double sum = 0;
    vector<double> values;
    int count = 0;
    bool is_valid = true;
    bool is_first = true;
    string unit = "";

    cout << "Enter a number and unit. Valid units are:" << endl;
    cout << "m for meters" << endl
         << "cm for centimeters" << endl
         << "in for inches" << endl
         << "ft for feet" << endl;
    
    while (cin >> a >> unit) {
        if (unit=="cm")
            a_conv = a/100;
        else if (unit=="m")
            a_conv = a;
        else if (unit=="in")
            a_conv = a * 0.01 * 2.54;
        else if (unit=="ft")
            a_conv = a * 0.01 * 12.0 * 2.54;
        else
            is_valid = false;

        if (is_valid) {
            if (a_conv < smallest || is_first) {
                smallest = a_conv;
                cout << a_conv << " the smallest so far" << endl;
            }
            else if (a_conv > largest || is_first) {
                largest = a_conv;
                cout << a_conv << " the largest so far" << endl;

            }
            sum += a_conv;
            values.push_back(a_conv);
            ++count;
            is_first = false;
        }
        else
            cout << "Invalid unit" << endl;
        is_valid = true;
    }

    cout << "Smallest value: " << smallest << " m" << endl;
    cout << "Largest value: " << largest << " m" << endl;
    cout << "Number of values: " << count << endl;
    cout << "Sum of values: " << sum << " m" << endl;
    
    cout << "Sorted list of values:" << endl;
    sort(values);
    for (double value: values)
        cout << '\t' << value << " meters\n";

    return 0;
}
