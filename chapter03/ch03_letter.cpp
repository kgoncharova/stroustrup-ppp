#include "../lib_files/std_lib_facilities.h"

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = '0';
    int age = 0;

    cout << "Enter the name of the person you want to write to:\n";
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
         << " How are you doing?\n";
    cout << "Please enter the name of someone you both know:\n";
    cin >> friend_name;
    cout << "Have you heard from " << friend_name << " lately?\n";
    cout << "Is this friend a male or a female?\n"
         << "(m/f)?";
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << friend_name
             << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name
             << " please ask her to call me.\n";
    cout << "How old is " << first_name << "?\n";
    cin >> age;
    if (age <= 0) simple_error("you're kidding!");
    if (age > 110) simple_error("you're kidding!");
    if (age < 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "Next year you will be able to vote!\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    cout << "Yours sincerely,\n\n\nKristina\n";
}
