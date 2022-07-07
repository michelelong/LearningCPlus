/*
== equal to
!= not equal to
> greater than
< less than
>= greater than or equal to
<= less than or equal to
*/
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand((int)time(0));
    int random_number = rand() % 10 + 1;

    // if, else if, else statement
    if (random_number > 7)
    {
        cout << "Greater than 7" << endl;
    }
    else if (random_number == 7)
    {
        cout << "Equal to 7" << endl;
    }
    else if (random_number < 2)
    {
        cout << "Less than 7" << endl;
    }
    else
    {
        cout << "Less than 2" << endl;
    }

    cout << "Random Number: " << random_number << endl;

    // switch statement
    switch (random_number)
    {

    case 1:
        cout << "Bulbusaur" << endl;
        break;
    case 2:
        cout << "Ivysaur" << endl;
        break;
    case 3:
        cout << "Venusaur" << endl;
        break;
    case 4:
        cout << "Charmander" << endl;
        break;
    case 5:
        cout << "Charmeleon" << endl;
        break;
    case 6:
        cout << "Charizard" << endl;
        break;
    default:
        cout << "Unknown" << endl;
        break;
    }

    // Nested switch
    int age = 48;
    
    switch (age >= 18)
    {
    case true:
        cout << "Old enough to be drafted." << endl;
        cout << "Old enough to vote." << endl;
        switch (age >= 21)
        {
        case true:
            cout << "Old enough to drink." << endl;
            break;
        case false:
            cout << "Not old enough to drink." << endl;
        }
        break;
    case false:
        cout << "Not old enough to be drafted." << endl;
        cout << "Not old enough to vote." << endl;
        cout << "Not old enough to drink." << endl;
    }
}
