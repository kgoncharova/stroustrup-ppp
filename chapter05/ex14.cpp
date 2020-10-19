#include "../lib_files/std_lib_facilities.h"

int main()
try {
    vector<string> sun_var = { "Sunday", "sunday", "Sun", "sun" };
    vector<string> mon_var = { "Monday", "monday", "Mon", "mon" };
    vector<string> tues_var = { "Tuesday", "tuesday", "Tues", "tues" };
    vector<string> wed_var = { "Wednesday", "wednesday", "Wed", "wed" };
    vector<string> thur_var = { "Thursday", "thursday", "Thur", "thur" };
    vector<string> fri_var = { "Friday", "friday", "Fri", "fri" };
    vector<string> sat_var = { "Saturday", "saturday", "Sat", "sat" };

    vector<int> sun_vals;
    vector<int> mon_vals;
    vector<int> tues_vals;
    vector<int> wed_vals;
    vector<int> thur_vals;
    vector<int> fri_vals;
    vector<int> sat_vals;

    int rejected = 0;
    bool end = false;

    cout << "Enter weekday/value pairs, exit with 'q 0'\n";

    while (!end) {
        bool match = false;
        string day;
        int val;

        cin >> day >> val;

        if (day == "q" && val == 0)
        {
            end = true;
        }
        else 
        {
            for (string var : sun_var)
                if (day == var) 
                {
                    match = true;
                    sun_vals.push_back(val);
                }
            for (string var : mon_var)
                if (day == var) 
                {
                    match = true;
                    mon_vals.push_back(val);
                }
            for (string var : tues_var)
                if (day == var) 
                {
                    match = true;
                    tues_vals.push_back(val);
                }
            for (string var : wed_var)
                if (day == var) 
                {
                    match = true;
                    wed_vals.push_back(val);
                }
            for (string var : thur_var)
                if (day == var) 
                {
                    match = true;
                    thur_vals.push_back(val);
                }
            for (string var : fri_var)
                if (day == var) 
                {
                    match = true;
                    fri_vals.push_back(val);
                }
            for (string var : sat_var)
                if (day == var) 
                {
                    match = true;
                    sat_vals.push_back(val);
                }
            if (!match) ++rejected;
        }
    }

    int sun_sum = 0;
    int mon_sum = 0;
    int tues_sum = 0;
    int wed_sum = 0;
    int thur_sum = 0;
    int fri_sum = 0;
    int sat_sum = 0;

    for (int v : sun_vals)
        sun_sum += v;
    for (int v : mon_vals)
        mon_sum += v;
    for (int v : tues_vals)
        tues_sum += v;
    for (int v : wed_vals)
        wed_sum += v;
    for (int v : thur_vals)
        thur_sum += v;
    for (int v : fri_vals)
        fri_sum += v;
    for (int v : sat_vals)
        sat_sum += v;

    cout << endl;
    cout << "Sums of the week:\n"
         << "Sunday: " << sun_sum << endl
         << "Monday: " << mon_sum << endl
         << "Tuesday: " << tues_sum << endl
         << "Wednesday: " << wed_sum << endl
         << "Thursday: " << thur_sum << endl
         << "Friday: " << fri_sum << endl
         << "Saturday: " << sat_sum << endl
         << "Rejected values: " << rejected << endl;

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
