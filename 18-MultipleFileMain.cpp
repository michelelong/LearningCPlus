#include <iostream>
#include "19-MultipleFileHeaders.hpp"
using namespace std;

// Compile g++ MultipleFileMain.cpp MultipleFileFunctions.cpp
int main()
{
    cout << boolalpha << is_palindrome("noon") << "\n";
    cout << tenth_power(4) << "\n";
    cout << average(4.0, 7.0) << "\n";
}
