#include <iostream>
using namespace std;

string two = "2"; // global variable

namespace expN // Define our own namespace
{
  int two = 2;        // Namespace variable
  void printResult(); // Declare function prototype
}

using namespace expN;

int main()
{
  double two = 2.2;              // Local variable
  double four = two + expN::two; // Add namespace variable to local variable

  cout << "Local double: " << two << endl;
  cout << "expN int: " << expN::two << endl;
  cout << "Global string: " << ::two << endl;
  cout << "Namespace plus local: " << four << endl;

  expN::printResult(); // Call function in specified namespace
}

void expN::printResult() // Define function outside specified namespace
{
  cout << "This is the printResult function in namespace expN." << endl;
}
