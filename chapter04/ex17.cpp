#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<string> input_set;
    string input;

    cout << "Fill the set with strings (end the input with Ctrl+D):" << endl;
    while (cin >> input) {
        input_set.push_back(input);
    }

    if (input_set.size() != 0) {
        vector<string> values;
        vector<int> times;

        sort(input_set);
        values.push_back(input_set[0]);
        times.push_back(1);

        for (int i = 1; i < input_set.size(); ++i) {
            if (input_set[i] == input_set[i-1]) {
                ++times[times.size()-1];
            } else {
                values.push_back(input_set[i]);
                times.push_back(1);
            }
        }

        string min = input_set[0];
        string max = input_set[0];

        for (string s : input_set) {
            if (s < min) min = s;
            if (s > max) max = s;
        }

        int max_times = 0;
        int idx = 0;
        for (int i = 0; i < times.size(); ++i) {
            if (times[i] > max_times) {
                max_times = times[i];
                idx = i;
            }
        }

        cout << "The min string: " << min << endl;
        cout << "The max string: " << max << endl;
        cout << "The mode = " << values[idx] << " found " 
            << times[idx] << " times" << endl;
    } else {
        cout << "There were no repeated values." << endl;
    }

    return 0;
}
