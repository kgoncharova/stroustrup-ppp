#include "../lib_files/std_lib_facilities.h"

int main()
{
    double total = 0;
    double rice = 1;

    cout << "Square" << '\t' << "Grains" << '\t' << "Total\n";

    for (int square = 1; square <= 64; ++square) {
        total += rice;
        cout << square << '\t' << rice << '\t' << total << endl;
        rice *= 2;
    }

    return 0;
}
