// Floating point data types are always signed, they can hold positive and
// negative values.
#include <cfloat>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
     // In order of decimal precision
     cout << "A float is " << sizeof(float) << " bytes and has a range of "
          << FLT_MIN << " to " << FLT_MAX << endl;
     cout << "A double is " << sizeof(double) << " bytes and has a range of "
          << DBL_MIN << " to " << DBL_MAX << endl;
     cout << "A long double is " << sizeof(long double)
          << " bytes and has a range of " << LDBL_MIN << " to " << LDBL_MAX << endl;

     cout << endl;

     float f1 = 1.0;
     float f2 = 0.9999999999999;
     // Float comparison may not give the expected answer
     if (f1 == f2)
     {
          cout << "They are the same." << endl;
     }
     else
     {
          cout << "They are not the same." << endl;
     }

     // Compare absolute float values
     if (fabs(f1 - f2) < 0.000001)
     {
          cout << "f1 and f1 are the same within the tolerance of "
               << "0.000001." << endl;
     }
     else
     {
          cout << "f1 and f2 are not the same within the tolerance of 0.000001." << endl;
     }

     return 0;
}
