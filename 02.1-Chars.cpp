#include <iostream>
using namespace std;

int main() {
  // Char is a 1 byte integer interpreted as an ASCII character
  cout << "A char is " << sizeof(char) << " byte"
       << " with a valid range of " << CHAR_MIN << " to " << CHAR_MAX << endl;
  cout << "A signed char is " << sizeof(signed char) << " bytes"
       << " with a valid range of " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
  cout << "An unsigned char is " << sizeof(unsigned char) << " bytes"
       << " with a valid range of 0 to " << UCHAR_MAX << endl;
}
