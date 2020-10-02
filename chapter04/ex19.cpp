#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<string> names;
    vector<int> values;

    string name = "";
    int value = 0;
    bool repeat = false;

    cout << "Enter a name and a value ('NoName 0' to stop):" << endl;

    while ((cin >> name >> value) && (name != "NoName" && value != 0)) {
        for (string n : names)
            if (n == name)
                repeat = true;

        if (repeat) {
            cout << "Error. This name already exists!" << endl;
            repeat = false;
        } else {
            names.push_back(name);
            values.push_back(value);
        }
    }

    cout << "Result:" << endl;

    for (int i = 0; i < names.size(); ++i)
        cout << names[i] << '\t' << values[i] << endl;

    return 0;
}
