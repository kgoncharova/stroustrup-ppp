#include "../lib_files/std_lib_facilities.h"

double ctof(double c)
{
    double f = 1.8*c + 32;
    if (f != int(f)) error("Result cannot be represented as an int!");
    return f;
}

double ftoc(double f)
{
    double c = (f-32)/1.8;
    if (c != int(c)) error("Result cannot be represented as an int!");
    return c;
}

int main()
{
    double c = 0.0;
    double f = 0.0;
    char ch;

    cout << "Enter a temperature in Celsius or Fahrenheit <C/F>: ";
    cin >> ch;
    
    switch(ch)
    {
        case 'F':
        case 'f':
            cin >> f;
            c = ftoc(f);
            cout << f << "F" << " converts to " << c << "C" << '\n';
            break;
        case 'C':
        case 'c':
            cin >> c;
            f = ctof(c);
            cout << c << "C" << " converts to " << f << "F" << '\n';
            break;
        default:
            cout << "Bye!";
    }

    return 0;
}
