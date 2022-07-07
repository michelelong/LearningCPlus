// Program to illustrate how to use the operators new and delete.
#include <iomanip>
#include <iostream>
using namespace std;

const double PI = 3.1416;

int main()
{
    double *radiusPtr;

    cout << fixed << showpoint << setprecision(2);

    radiusPtr = new double;

    cout << "Enter the radius: ";
    cin >> *radiusPtr;

    cout << endl;
    cout << "Address of radiusPtr: " << &radiusPtr << endl;
    cout << "Value stored in radiusPtr: " << radiusPtr << endl;
    cout << "Value stored in the memory location to which radiusPtr is pointing: " << *radiusPtr << endl;

    delete radiusPtr;

    cout << endl;
    cout << "After using the delete operator, the value stored in the location to which radiusPtr is pointing: " << *radiusPtr << endl;

    double *lengthPtr = new double;
    radiusPtr = new double;
    *radiusPtr = 5.38;

    cout << "Address of radiusPtr: " << &radiusPtr << endl;
    cout << "Value stored in radiusPtr: " << radiusPtr << endl;
    cout << "Value stored in the memory location to which radiusPtr is pointing: " << *radiusPtr << endl;
    cout << "Value stored in lengthPtr: " << lengthPtr << endl;

    return 0;
}
