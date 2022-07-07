/*
signed: holds both negative and positive numbers.
unsigned: holds only positive values.
*/
#include <iostream>
using namespace std;
int main() {
  cout << "A signed int is " << sizeof(int) << " bytes"
       << " with a valid range of " << INT_MIN << " to " << INT_MAX << endl;
  cout << endl;

  cout << "An unsigned int is " << sizeof(unsigned long int) << " bytes"
       << " with a valid range of 0 to " << UINT_MAX << endl;
  cout << endl;

  cout << "A signed short int is " << sizeof(short int) << " bytes"
       << " with a valid range of " << SHRT_MIN << " to " << SHRT_MAX << endl;
  cout << endl;

  cout << "An unsigned short int is " << sizeof(unsigned short int) << " bytes"
       << " with a valid range of 0 to " << USHRT_MAX << endl;
  cout << endl;

  cout << "A signed long int is " << sizeof(long int) << " bytes"
       << " with a valid range of " << LONG_MIN << " to " << LONG_MAX << endl;
  cout << endl;

  cout << "An unsigned long int is " << sizeof(unsigned long int) << " bytes"
       << " with a valid range of 0 to " << ULONG_MAX << endl;
  cout << endl;
}
