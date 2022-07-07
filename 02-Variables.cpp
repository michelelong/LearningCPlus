#include <iostream>
using namespace std;

int main() {

  // Variable names start with a letter (a-Z) or an underscore (_)

  // Primitive Data Types: int, double, char, string, & bool

  // Declare variables
  int a;        // integer
  double tempF; // floating-point

  // Declare and assign variables
  char initial = 'M';           // individual character
  string firstName = "Michele"; // sequence of characters
  bool isCorrect = false;       // true(1)/false(0)

  // Auto infers the data type from the value when declared and assigned at the same time
  auto tempC = 23;

  // Assign value to declared variables
  a = 10;
  tempF = 85;

  cout << firstName << endl;

  return 0;
}
