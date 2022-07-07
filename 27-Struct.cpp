#include <iostream>
using namespace std;

// struct is a keyword, dateType is the struct name
struct dateType
{
    // struct members, public by default
    int month;
    int day;
    int year;

    void setLeap()
    { // members can be functions
        leap = true;
    }
    bool getLeap()
    {
        return leap;
    }
    // struct members can be set to private, everything that follows will be private
    // until public is used

private:
    bool leap = false;

}; // structs must end with a semicolon

struct nameType
{
    string first;
    char middleInitial;
    string last;
};

struct contactType
{
    // Nested structs
    nameType name;
    dateType date;
};

int main()
{
    dateType date; // Declaration variable of the struct datatype

    cout << "Enter the month, day, and year (mm dd yy): ";

    // Assign values to the struct members
    cin >> date.month >> date.day >> date.year;

    cout << date.month << "/" << date.day << "/" << date.year << endl;

    // Accessing nested structs
    contactType contact1;
    contact1.name.first = "Michele";
    contact1.name.middleInitial = 'L';
    contact1.name.last = "Long";
    contact1.date.month = 11;
    contact1.date.day = 4;
    contact1.date.year = 1974;

    contactType contact2;
    contact2 = contact1; // copy of structs is allowed
    cout << contact2.name.first << endl;
    contact2.name.first = "George";
    cout << contact2.name.first << endl;
    cout << contact1.name.first << endl; // changes do not affect original

    // No relational operations, ==, !=, <, >, <=, >=, cout << struct, or arithmetic
    
    // Structs can be passed by value or reference to functions
    // Functions can return type struct

    struct listType
    {
        int list[5]; // structs can have array members
        int listSize = 0;
    };

    listType myList;
    myList.list[0] = 12;
    myList.listSize += 1;
    cout << myList.list[0] << endl;

    // Arrays can have struct elements
    contactType arr[2];
    arr[0].name.first = "Romeo";
    cout << arr[0].name.first << endl;
    arr[1].name.first = "Dolly";
    cout << arr[1].name.first << endl;

    struct Derived : dateType
    {
        // Inherit dateType struct
        // Inherited struct members are public
    };

    Derived object;
    object.month = 4;
    cout << object.month << endl;

    dateType funcTest;
    // call a struct member method to access a private member
    funcTest.setLeap();
    cout << funcTest.getLeap() << endl;
}
