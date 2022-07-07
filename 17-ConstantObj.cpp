#include "17-ConstantObj.hpp"
#include <iostream>
using namespace std;

// Constant method definition, must also be constant in the declaration file
bool Shoe::getSole() const
{
    return sole;
}

bool Shoe::getLaces()
{
    return laces;
}

int main()
{
    // Constant object can only call constant (getSole) class methods
    const Shoe nike(true, false);
    cout << "Has a sole: " << boolalpha << nike.getSole() << endl;

    // Non-constant object can call both constant and non-constant class methods
    Shoe newBalance(false, true);
    cout << "Has sole: " << boolalpha << newBalance.getSole() << endl;
    cout << "Has laces: " << boolalpha << newBalance.getLaces() << endl;
}
