#include "../lib_files/std_lib_facilities.h"

int main()
{
    constexpr double UAH_TO_USD = 0.0354169;
    constexpr double RUB_TO_USD = 0.0130115;
    constexpr double CNY_TO_USD = 0.147037;
    constexpr double EUR_TO_USD = 1.16529;
    constexpr double GBP_TO_USD = 1.27236;

    double amount = 0;
    char currency = ' ';

    cout << "Enter a foreign currency:\n"
         << "Currencies supported:\n"
         << "u for Ukrainian Hryvnia\n"
         << "r for Russian Ruble\n"
         << "c for Chinese Yuan Renminbi\n"
         << "e for Euro\n"
         << "g for British Pound\n";
    cin >> currency;

    cout << "Enter an amount of money:\n";
    cin >> amount;

    switch (currency) {
    case 'u':
        cout << amount << " UAH = "
             << amount * UAH_TO_USD << " USD;\n"
             << "1 UAH = " << UAH_TO_USD << " USD.\n";
        break;
    case 'r':
        cout << amount << " RUB = "
             << amount * RUB_TO_USD << " USD;\n"
             << "1 RUB = " << RUB_TO_USD << " USD.\n";
        break;
    case 'c':
        cout << amount << " CNY = "
             << amount * CNY_TO_USD << " USD;\n"
             << "1 CNY = " << CNY_TO_USD << " USD.\n";
        break;
    case 'e':
        cout << amount << " EUR = "
             << amount * EUR_TO_USD << " USD;\n"
             << "1 EUR = " << EUR_TO_USD << " USD.\n";
        break;
    case 'g':
        cout << amount << " GBP = "
             << amount * GBP_TO_USD << " USD;\n"
             << "1 GBP = " << GBP_TO_USD << " USD.\n";
        break;
    default:
        cout << "Sorry! Currency indicated by " 
             << currency << " is not supported.\n";
        break;
    }
    return 0;
}
