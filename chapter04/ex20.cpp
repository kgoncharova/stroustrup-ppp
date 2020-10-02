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

    string query = "";

    cout << "Type a name a get the score:" << endl;
    cin >> query;

    int idx = 0;
    bool found = false;

    for (int i = 0; i < names.size(); ++i)
        if (names[i] == query) {
            found = true;
            idx = i;
        }

    if (found)
        cout << "Score: " << values[idx] << endl;
    else
        cout << "Name not found!" << endl;

    return 0;
}
