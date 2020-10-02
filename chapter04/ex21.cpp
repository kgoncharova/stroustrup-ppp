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

    int score = 0;

    cout << endl << "Type a score:" << endl;
    cin >> score;

    vector<string> matches;

    for (int i = 0; i < names.size(); ++i)
        if (values[i] == score)
            matches.push_back(names[i]);

    if (matches.size() > 0) {
        cout << "Results:" << endl;
        for (string m : matches)
            cout << '\t' << m << endl;
    } else {
        cout << "Score not found!" << endl;
    }

    return 0;
}
