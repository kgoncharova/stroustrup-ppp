#include "../lib_files/std_lib_facilities.h"

int main()
{
    vector<string> words;
    vector<string> dislikes = { "broccoli", "apple", "milk" };
    
    cout << "Please enter words below:" << endl;
    for (string word; cin >> word;) words.push_back(word);

    cout << endl << "Result:" << endl;

    for (string word : words) {
        bool disliked = false;

        for (string dislike : dislikes)
            if (word==dislike)
                disliked = true;

        if (disliked)
            cout << "BLEEP!\n";
        else
            cout << word << '\n';
    }

    return 0;
}
