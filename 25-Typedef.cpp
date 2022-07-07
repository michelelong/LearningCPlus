#include <iostream>
using namespace std;

int main()
{

    typedef int integer; // integer is an alias to int

    integer num = 12;

    cout << num << endl;

    const int SIZE = 50;
    typedef double list[SIZE]; // datatype list, an array of 50 type double elements
    list yourList;             // array of 50 type double elements
    list myList;               // array of 50 type double elements

    // This is the same as double yourList[50]; double myList[50];
}
