#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int square = 0;

    while (i != 10)
    {
        square = i * i;
        cout << "The square of " << i << " is " << square << ".\n";
        i++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "I will not throw paper airplanes in class.\n";
    }

    // Range based For Loop (for each)
    int sum = 0;
    int list[5] = {1, 2, 3, 4, 5};

    for (int idx : list)
    {
        sum += idx;
        cout << "Sum of list: " << sum << endl;
    }

    int input = 0;
    do
    { // Always executes once, condition is checked after execution
        cout << "Enter 1, 2, or 3: ";
        cin >> input;
        cout << "You entered " << input << endl;

    } while (input != -1);
}
