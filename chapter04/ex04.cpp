#include "../lib_files/std_lib_facilities.h"

int main()
{
    int number = 0;
    unsigned int counter = 0;
    int guess = 50;
    vector<int> differences(6);
    differences[0] = 25;
    differences[1] = 13;
    differences[2] = 6;
    differences[3] = 3;
    differences[4] = 2;
    differences[5] = 1;
    char answer = ' ';
    bool guessed = false;

    cout << "Enter a number between 1 and 100:" << endl;
    cin >> number;

    if (number < 1 || number > 100) {
        cout << "Invalid number" << endl;
    } else {
        while (guessed == false) {
            cout << "My guess: " << guess << endl;
            ++counter;
            if (number == guess) {
                guessed = true;
                cout << "I win! Your number is: " << guess << endl;
            } else {
                cout << "Is it smaller or larger (s, l)? " << endl;
                cin >> answer;
                switch (answer) {
                    case 's':
                        if (counter<=differences.size())
                            guess -= differences[counter-1];
                        else
                            --guess;
                        break;
                    case 'l':
                        if (counter<=differences.size())
                            guess += differences[counter-1];
                        else
                            ++guess;
                        break;
                    default:
                        cout << "Sorry, I don't understand your answer" << endl;
                        break;
                }
            }
        }
    }

    return 0;
}
