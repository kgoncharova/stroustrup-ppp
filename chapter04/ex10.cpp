#include "../lib_files/std_lib_facilities.h"

char get_computer_choice(char player_choice, int random)
{
    vector<char> choices = { 'r', 'p', 's' };

    int input = (int(player_choice) + random) % 3;
    return choices[(input)];
}

int main()
{
    char computer_choice = ' ';
    char player_choice = ' ';
    char result = ' ';

    int player_score = 0;
    int computer_score = 0;
    int randomizer = 0;
    int ties = 0;

    cout << "Lets play rock, paper, scissors." << endl;
    cout << "What is your choice?(r/p/s)" << endl;

    while (cin >> player_choice) {
        computer_choice = get_computer_choice(player_choice, randomizer);

        switch (player_choice) {
            case 'r':
                if (computer_choice == 'r')
                    result = 't';
                else if (computer_choice == 'p')
                    result = 'l';
                else if (computer_choice == 's')
                    result = 'w';
                break;
            case 'p':
                if (computer_choice == 'r')
                    result = 'w';
                else if (computer_choice == 'p')
                    result = 't';
                else if (computer_choice == 's')
                    result = 'l';
                break;
            case 's':
                if (computer_choice == 'r')
                    result = 'l';
                else if (computer_choice == 'p')
                    result = 'w';
                else if (computer_choice == 's')
                    result = 't';
                break;
            default:
                cout << "Bad input. Use 'r', 'p' or 's'" << endl;
                break;
        }

        cout << "You chose: " << player_choice << endl;
        cout << "Computer chose: " << computer_choice << endl;

        switch (result) {
            case 'w':
                cout << "You win!" << endl;
                ++player_score;
                break;
            case 'l':
                cout << "You lose!" << endl;
                ++computer_score;
                break;
            case 't':
                cout << "Tie game!" << endl;
                ++ties;
                break;
            default:
                break;
        }
        cout << "\tSCORE | Player: " << player_score << " | Computer: "
             << computer_score << " | Ties: " << ties << endl;
        cout << "Do you want to play again?(r/p/s)" << endl;
        ++randomizer;
    }

    return 0;
}
