#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Jessica";
    double gpa = 3.75;
    int scholarship = 7850;
    cout << "-----------------------------" << endl;

    // Set floats to fixed, show decimal and limit trailing zeros to two digits
    cout << fixed << showpoint << setprecision(2);

    // Set whitespace in columns to * and set columns to n width
    cout << setfill('*') << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;

    cout << "-----------------------------" << endl;

    cout << setfill('#') << setw(10) << name << setfill(' ') << setw(7) << gpa << setfill('*') << setw(8) << scholarship << endl;
    return 0;
}
