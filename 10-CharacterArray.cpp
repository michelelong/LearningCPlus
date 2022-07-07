#include <iostream>
using namespace std;

int main()
{
    // Character arrays (c-strings)
    // C-strings are null terminated ('\0')
    // Array length must be one larger than the string to hold the \0
    // If string length exceeds array, memory outside the array will be accessed
    char name[8] = {'M', 'i', 'c', 'h', 'e', 'l', 'e', '\0'};
    char firstName[6] = "Gabby";

    strcpy(name, "Robert");                  // Copy string "Robert" to variable
    cout << strcmp(name, firstName) << endl; // Compare two strings

    cout << "Enter new name: ";
    // Input and output are the only operations allowed on a character array as a whole
    cin >> name;
    cout << name << endl;

    char alpha[5] = {'a', 'b', 'c', 'd', 'e'}; // No null terminator
    cout << alpha << endl; // Continues output until a null char is found
    // results in memory access outside of the array

}
