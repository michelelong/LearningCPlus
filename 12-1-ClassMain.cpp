#include "12-2-Class.hpp"
#include <iostream>
using namespace std;

int main()
{
    Song electric_relaxation("Electric Relaxation", "A Tribe Called Quest");
    cout << electric_relaxation.get_title() << "\n";
    cout << electric_relaxation.get_artist() << "\n";

    // Create object
    Song bcSong("Manual Operator", "Buzzcocks");

    // Create pointer to object address
    Song *objPtr = &bcSong;

    // Dereference (return value at address) pointer
    cout << (*objPtr).get_title() << endl;

    // Arrow member selection operator (->) for pointers
    cout << objPtr->get_artist() << endl;
}
