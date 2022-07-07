#include <iostream>
// Inheritance implements the "is-a" relationship
// A dog is-a mammal, also dog is-a animal

class Vehicle
{
public:
    Vehicle(){
        // Base constructor runs first
    };
    ~Vehicle()
    {
        // Base destructor runs fourth
    }
    void go()
    {
        std::cout << "Vroom!" << std::endl;
    }
};

// Public members of the base class (Vehicle) become public members of the derived class (Car)
// not including overloaded operators and friend functions

// A class can be derived from multiple bases by a comma-separated list
// (public Vehicle, public Machine)
class Car : public Vehicle
{
public:
    Car(){
        // Derived constructor runs second
    };
    ~Car(){
        // Derived destructor runs third
    };
};

int main()
{
    Car camry;
    camry.go();
}
/*
Public Inheritance:
Public members of the base class become public members of the derived class
Protected members of the base class become protected members of the derived class

Protected Inheritance:
Public and protected members of the base class become protected members of the derived class

Private Inheritance:
Public and protected members of the base class become private members of the derived class

If no access specifier is used, private is the default
*/
