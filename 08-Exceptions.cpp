#include <cassert>
#include <iostream>
using namespace std;

int main()
{
    int x[3] = {-1, 2};
    for (int i = 0; i < 2; i++)
    {
        int ex = x[i];
        try
        {
            if (ex > 0)
                // throwing numeric value as exception
                throw ex;
            else
                // throwing a character as exception
                throw 'e';
        }
        catch (int ex) // to catch numeric exceptions
        {
            cout << "Integer exception\n";
        }
        catch (char ex) // to catch character/string exceptions
        {
            cout << "Character exception\n";
        }
    }

    cout << "Assertion tests: " << endl;
    int zero = 0;
    // Does nothing when expression is true
    assert(zero == 0);

    // Fail if assert expression is false
    assert(zero != 0);
}
