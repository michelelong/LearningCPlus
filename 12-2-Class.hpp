// Protect against multiple inclusions
#pragma once
#include <string>
using namespace std;

// Class definition and method signatures
// See 12-3-Class.cpp for method definitions
class Song
{
    string title;
    string artist;

// Everything that follows will be public until a different modifier is encountered
public: // Accessible to all
        // Function prototypes
    Song(string title, string artist);
    ~Song();
    string get_title();
    string get_artist();

// private: accessible only inside class, default
// protected: accessible by class and its subclasses

}; // Class definitions end with a semicolon
