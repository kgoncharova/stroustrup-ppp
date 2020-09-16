#include "../lib_files/std_lib_facilities.h"

int main()
{
  int double = 5.52; // error: expected unqualified-id before ‘=’ token
  string 1;          // error: expected unqualified-id before numeric constant
  int string = 10;   // warning: unused variable ‘string’ [-Wunused-variable]
}
