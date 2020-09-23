#include "../lib_files/std_lib_facilities.h"

int main()
{
    double total = 0;

    cout << "How many pennies do you have?" << endl;
    int pennies = 0;
    cin >> pennies;
    total += pennies * 0.01;

    cout << "How many nickels do you have?" << endl;
    int nickels = 0;
    cin >> nickels;
    total += nickels * 0.05;

    cout << "How many dimes do you have?" << endl;
    int dimes = 0;
    cin >> dimes;
    total += dimes * 0.1;

    cout << "How many quarters do you have?" << endl;
    int quarters = 0;
    cin >> quarters;
    total += quarters * 0.25;

    cout << "How many half dollars do you have?" << endl;
    int halfs = 0;
    cin >> halfs;
    total += halfs * 0.5;
    
    cout << "How many dollars do you have?" << endl;
    int dollars = 0;
    cin >> dollars;
    total += dollars * 1;

    if (pennies != 0) {
        cout << "You have " << pennies;
        if (pennies == 1)
            cout << " penny.\n";
        else
            cout << " pennies.\n";
    }

    if (nickels != 0) {
        cout << "You have " << nickels;
        if (nickels == 1)
            cout << " nickel.\n";
        else
            cout << " nickels.\n";
    }

    if (dimes != 0) {
        cout << "You have " << dimes;
        if (dimes == 1)
            cout << " dime.\n";
        else
            cout << " dimes.\n";
    }

    if (quarters != 0) {
        cout << "You have " << quarters;
        if (quarters == 1)
            cout << " quarter.\n";
        else
            cout << " quarters.\n";
    }

    if (halfs != 0) {
        cout << "You have " << halfs;
        if (halfs == 1)
            cout << " half dollar.\n";
        else
            cout << " half dollars.\n";
    }

    if (dollars != 0) {
        cout << "You have " << dollars;
        if (dollars == 1)
            cout << " dollar.\n";
        else
            cout << " dollars.\n";
    }

    cout << "The value of all of your coins is $" << total << "\n";
    return 0;
}
