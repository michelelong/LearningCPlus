// When * is used in a declaration, it is creating a pointer to memory space.
// When * is used elsewhere, it is a dereference (return the value of) operator.

#include <iostream>
using namespace std;
// Function Prototypes
void ptrFunc(int *);
void funOne(int &);
int square(int const &i);

int main()
{
    int number = 9;
    // Pointer data type matches the referenced variable
    int *ptr = &number; // Value of *ptr is the memory location of &variable

    cout << endl;
    cout << "Memory location OF variable: " << &number << endl;
    cout << "Memory location OF pointer: " << &ptr << endl;
    cout << endl;
    cout << "Memory location IN pointer: " << ptr << endl;
    cout << "Location IN pointer is the same as location OF variable? " << boolalpha << (ptr == &number) << endl;
    cout << endl;
    cout << "Value IN variable: " << number << endl;
    cout << "Value at memory location IN pointer: " << *ptr << endl; // *dereference

    // Pass address of variable to function
    ptrFunc(&number); // changes the varible outside the function
    cout << "Change value outside function: " << number << endl;
    cout << endl;

    // Uninitialized pointer creates dangerous access to random data in memory.
    int *badPtr;

    // Create a safe empty pointer
    int *goodPtr = nullptr;

    // When & is used in a declaration, it is a reference (alias) operator.
    // When & is used elsewhere, it is an address of operator.

    int num1 = 10;

    cout << "Inside main: num1 = " << num1 << endl;

    funOne(num1);

    cout << "After funOne: num1 = " << num1 << endl;

    string name = "Michele";

    // Reference variable (&nick) is an alias for another variable (name)
    string &nick = name;

    cout << "\nName: " << name << endl;
    cout << "Nickname: " << nick << endl;

    // Making changes to one will change the other
    cout << "Change nickname to " << nick << endl;
    nick = "Shell";
    cout << "Name: " << name << endl;

    cout << endl;
    int sq = 5;
    cout << "Square of the number is " << square(sq) << endl;
    cout << "The number is " << sq << endl; // Didn't change because parameter is constant

    string *str;        // pointer of type string
    str = new string;   // allocates memory of type string and stores memory address in str
    *str = "Sunny Day"; // stores the string "Sunny Day" in the memory pointed to by str
}

// Parameter becomes a pointer to the argument address
// For objects too large to pass by value, which copies the argument
void ptrFunc(int *a)
{
    // Get and change value directly at address
    *a += 5;
}

// The parameter b is being passed by reference, allowing it to be modified out of scope
void funOne(int &a)
{
    // Called with num1(a) = 10
    a++;
}

// Constant reference to an unchanging argument saves the cost of making a copy
int square(int const &i)
{
    return i * i;
}
