#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<double> distances;
    double distance;
    double mean;
    double total = 0;

    cout << "Please, insert distances between cities:" << endl;

    while (cin >> distance) {
        distances.push_back(distance);
    }

    double min = distances[0];
    double max = distances[0];

    for (double d : distances) {
        if (d<min) min = d;
        if (d>max) max = d;
        total += d;
    }

    mean = total/distances.size();

    cout << "The smallest distance: " << min << endl
         << "The largest distance: " << max << endl
         << "The total distance " << total << endl
         << "The mean distance: " << mean << endl;
    return 0;
}
