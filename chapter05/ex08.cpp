#include "../lib_files/std_lib_facilities.h"

int main()
try {
    cout << "Please enter the number of values you want to sum: \n";
    int n = 0;
    int x = 0;
    cin >> n;

    vector<int> values;
    cout << "Please enter some integers (press '|' to stop): \n";
    
    while (cin >> x)
        values.push_back(x);

    if (values.size() < n)
        error("Less values provided than initially indicated.\n");

    int sum = 0;

    cout << "The sum of the first " << n << " numbers: ";

    for (int i = 0; i < n; ++i) {
        cout << values[i];
        sum += values[i];
        if (i < n-1)
            cout << " + ";
    }

    cout << " is " << sum << endl;

    return 0;
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception!\n";
    return 2;
}
