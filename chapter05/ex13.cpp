#include "../lib_files/std_lib_facilities.h"

int main()
try {
    bool play = true;
    char ch;
    int num = 0;

    do {
        cout << "Let's play Bulls & Cows! Begin? (y/n)\n";
        cin >> ch;
        if (ch == 'n')
        {
            play = false;
            cout << "Bye!\n";
            return 0;
        }

        vector<int> digits;
        bool success = false;

        cout << "Please, enter a random number to start the game\n";
        cin >> num;
        if (!cin) error("Couldn't read integer from input\n");
        srand(num);
        cout << num;

        while (digits.size() < 4) {
            int val = randint(9);
            bool repeat = false;

            if (digits.size() == 0)
                digits.push_back(val);
            else {
                for (int d : digits)
                    if (d == val)
                        repeat = true;

                if (!repeat)
                    digits.push_back(val);
            }
        }

        cout << "Guess 4 digits. The four digits must be all different:\n";

        while (!success) {
            vector<int> guess;

            int bulls = 0;
            int cows = 0;
            int val = 0;

            while (guess.size() < 4 && cin >> val)
            {
                if (!cin) error("Couldn't read integer from input\n");
                guess.push_back(val);
            }

            for (int i = 0; i < guess.size(); ++i)
                for (int j = 0; j < digits.size(); ++j)
                    if (guess[i] == digits[j]) {
                        if (i == j)
                            ++bulls;
                        else
                            ++cows;
                    }

            cout << bulls << " bulls, " << cows << " cows.\n";

            if (bulls == 4) success = true;
        }
        cout << "Success!\n";
    } while (play);

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
