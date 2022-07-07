#include "12-2-Class.hpp"
#include <iostream>
using namespace std;

// Definitions for methods declared in 12-2-Class.hpp

// Contructor
// Scope resolution operator (::)
Song::Song(string new_title, string new_artist)
{
    title = new_title;
    artist = new_artist;
}

// Destructor can't return a value or take any parameters
// It is used to close files, release memory, and do clean up
Song::~Song()
{
    cout << "Goodbye!" << endl;
}

// Actual code for the methods defined in a separate file (12-2-Class.hpp)
string Song::get_title()
{
    return title;
}

string Song::get_artist()
{
    return artist;
}
