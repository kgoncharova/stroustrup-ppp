#include "../lib_files/std_lib_facilities.h"

int main()
{
    constexpr double UAH_TO_USD = 0.0354169;
    constexpr double RUB_TO_USD = 0.0130115;
    constexpr double CNY_TO_USD = 0.147037;

    double amount = 0;
    char currency = ' ';

    cout << "Enter a foreign currency:\n"
         << "Currencies supported:\n"
         << "u for Ukrainian Hryvnia\n"
         << "r for Russian Ruble\n"
         << "c for Chinese Yuan Renminbi\n";
    cin >> currency;

    cout << "Enter an amount of money:\n";
    cin >> amount;

    if (currency == 'u')
        cout << amount << " UAH = "
             << amount * UAH_TO_USD << " USD;\n"
             << "1 UAH = " << UAH_TO_USD << " USD.\n";
    else if (currency == 'r')
        cout << amount << " RUB = "
             << amount * RUB_TO_USD << " USD;\n"
             << "1 RUB = " << RUB_TO_USD << " USD.\n";
    else if (currency == 'c')
        cout << amount << " CNY = "
             << amount * CNY_TO_USD << " USD;\n"
             << "1 CNY = " << CNY_TO_USD << " USD.\n";
    else
        cout << "Sorry! Currency indicated by " 
             << currency << " is not supported.\n";

    return 0;
}
