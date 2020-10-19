#include "../lib_files/std_lib_facilities.h"

class Quadratic_equation { };
double discriminant(double a, double b, double c)
{
    double d = b*b - 4*a*c;
    if (d < 0) throw Quadratic_equation{};

    return d;
}

int main()
try {
    double a, b, c;

    cout << "Enter coefficients a, b and c of ax^2 + bx + c = 0" << endl;
    cin >> a >> b >> c;

    double x1 = (-b + sqrt(discriminant(a, b, c))) / (2*a);
    double x2 = (-b - sqrt(discriminant(a, b, c))) / (2*a);

    cout << "The solution are: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}
catch(Quadratic_equation) {
    cout << "The quadratic equation has no real roots.\n";
}
catch(...) {
    cout << "Exception: something went wrong.\n";
}
