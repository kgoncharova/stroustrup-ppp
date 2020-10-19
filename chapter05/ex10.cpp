#include "../lib_files/std_lib_facilities.h"

int main()
try {
    int n = 0;
    double x = 0;

    cout << "Please enter the number of values you want to sum: \n";
    cin >> n;

    vector<double> values;
    cout << "Please enter some integers (press '|' to stop): \n";
    
    while (cin >> x)
        values.push_back(x);

    if (values.size() < n)
        error("Less values provided than initially indicated.\n");

    vector<double> diffs;
    for (int i = 1; i < values.size(); ++i)
        diffs.push_back(values[i] - values[i-1]);

    double sum = 0;

    cout << "The sum of the first " << n << " numbers: ";

    for (int i = 0; i < n; ++i) {
        cout << values[i];
        sum += values[i];
        if (i < n-1)
            cout << " + ";
    }

    cout << " is " << sum << endl;
    cout << "Vector of differences: \n";

    for(double d : diffs)
        cout << d << " ";

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
