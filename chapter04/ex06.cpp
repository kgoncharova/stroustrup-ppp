#include "../lib_files/std_lib_facilities.h"

int main()
{
    string num = "";

    vector<string> numbers  = { "0", "1", "2", "3", "4", "5", "6", "7", 
        "8", "9" };
    vector<string> strings  = { "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine" };

    cout << "Enter a number from 0 - 9" << endl;

    while (cin >> num) {
        bool was_found = false;

        for (int i = 0; i < strings.size(); ++i) {
            if (strings[i] == num) {
                cout << "Result: " << i << endl;
                was_found = true;
            }
            if (numbers[i] == num) {
                cout << "Result: " << strings[i] << endl;
                was_found = true;
            }
        }

        if (was_found == false)
            cout << "Error! Unknown number!" << endl;
    }

    return 0;
}
