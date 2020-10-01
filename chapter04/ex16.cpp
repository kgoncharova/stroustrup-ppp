#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<int> numbers = { 18, 21, 11, 11, 21, 15, 19, 17, 21, 21 };
    int temp_num;
    int temp_counter = 1;
    int num;
    int counter = 1;

    sort(numbers);

    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i-1] == numbers[i]) {
            temp_num = numbers[i];
            ++temp_counter;
        } else {
            if (temp_counter > counter) {
                counter = temp_counter;
                num = temp_num;
            }
            temp_counter = 1;
        }
    }

    if (temp_counter > counter) {
        cout << "Mode = " << temp_num << " found " << temp_counter << " times " << endl;
    } else {
        cout << "Mode = " << num << " found " << counter << " times " << endl;
    }

    return 0;
}
