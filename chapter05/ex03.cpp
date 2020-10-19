#include "../lib_files/std_lib_facilities.h"

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;

    if (c < -273.15) error("Input temp is lower than absolute 0.\n");

    double k = ctok(c);
    cout << k << '\n';

    return 0;
}
