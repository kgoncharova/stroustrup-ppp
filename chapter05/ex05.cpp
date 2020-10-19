#include "../lib_files/std_lib_facilities.h"

double ktoc(double k)
{
    if (k < 0) error("Input temp is lower than absolute zero.\n");

    double c = k - 273.15;
    return c;
}

int main()
{
    double k = 0;
    cin >> k;

    double c = ktoc(k);
    cout << c << '\n';

    return 0;
}
