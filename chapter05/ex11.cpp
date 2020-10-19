#include "../lib_files/std_lib_facilities.h"

int fibonacci(int count)
{
    int pre = 0;
    int cur = 1;
    int sum = 0;

    if (count > 0)
        cout << 1 << " ";

    for (int i = 1; i < count; ++i) {
        sum = pre + cur;
        cout << sum << " ";
        pre = cur;
        cur = sum;
    }
    cout << '\n';
    return 0;
}

int main()
try {
    cout << "How many Fibonacci numbers do you want to see?\n";
    int count;
    cin >> count;
    fibonacci(count);

    return 0;
}
catch(exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception!\n";
    return 2;
}
