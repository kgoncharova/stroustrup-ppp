#include "../lib_files/std_lib_facilities.h"

int main()
{
    string val1;
    string val2;
    string val3;
    string greatest;
    string middlest;
    string smallest;
    cout << "Enter three strings to sort:\n";
    cin >> val1 >> val2 >> val3;

    if (val1 < val2 && val1 < val3) {

        smallest = val1;

        if (val2 < val3) {
            middlest = val2;
            greatest = val3;
        } else {
            middlest = val3;
            greatest = val2;
        }
    } else if (val2 < val3){

        smallest = val2;

        if (val1 < val3) {
            middlest = val1;
            greatest = val3;
        } else {
            middlest = val3;
            greatest = val1;
        }

    } else {

        smallest = val3;

        if (val1 < val2) {
            middlest = val1;
            greatest = val2;
        } else {
            middlest = val2;
            greatest = val1;
        }
    }

    cout << smallest << ", " << middlest << ", " << greatest << '\n';
}
