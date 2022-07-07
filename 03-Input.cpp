#include <iostream>
using namespace std;

int main()

{

  string firstName = "";
  string lastName = "";

  // cout << "What is your first name and last name? ";

  // Standard Input (cin) gets input from the user
  // Extraction operator (>>) redirects input to variable

  // cin >> firstName >> lastName; // cin skips whitespace & moves to the next char
  // cout << "Hello, " << firstName << " " << lastName << "." << endl;

  char fullName[16];
  char address[40];

  cout << "What is your first name and last name? ";
  cin.get(fullName, 16); // Get string including whitespace
  cout << "Full name: " << fullName << endl;

  cin.clear(); // Return stream to working state
  cin.ignore(); // Ignore garbage in stream

  cout << "What is your address? ";
  cin.getline(address, 40); // Get string including whitespace, delimiter is newline
  cout << "Address: " << address << endl;

  return 0;
}
