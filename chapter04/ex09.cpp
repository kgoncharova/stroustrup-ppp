#include "../lib_files/std_lib_facilities.h"

int main()
{
    double total = 0;
    double rice = 1;
    int target = 0;

    cout << "How many squares:" << endl;
    cin >> target;

    cout << "Square" << '\t' << "Grains" << '\t' << "Total\n";

    for (int square = 1; square <= target; ++square) {
        total += rice;
        cout << square << '\t' << rice << '\t' << total << endl;
        rice *= 2;
    }

    return 0;
}
