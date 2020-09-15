#include "../lib_files/std_lib_facilities.h"

int main()
{    
    double miles;
    double kilometers;
    
    cout << "Enter a measurement in miles to convert to kilometers:\n";
    cin >> miles;
    kilometers = miles * 1.609;
    cout << "There are " << kilometers 
    	 << " kilometers in " << miles 
    	 << " miles.\n"; 
}

