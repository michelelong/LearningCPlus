#include <iostream>
#include <vector>
using namespace std;

// Function header format: datatype functionName(datatypeOfVar varname)
double average(double num1, double num2)
{
    return (num1 + num2) / 2;
}

vector<int> first_three_multiples(int num)
{
    vector<int> multiples;

    for (int i = 0; i < 3; i++)
    {
        multiples.push_back(num * i);
    }
    return multiples;
}

// Default parameter
void turnOffOn(string didTry = "no")
{
    if (didTry.compare("yes"))
    {
        cout << "Try turning it off and on again.\n";
    }
    else
    {
        cout << "Please, hold.\n";
    }
}

// Overload a function with a different number of parameters or a different type, see Template.cpp
int fancy_number(int num1, int num2)
{
    return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3)
{
    return num1 - num2 - num3 + (num1 * num2 * num3);
}

double fancy_number(double num1, double num2)
{
    return num1 - num2 + (num1 * num2);
}

// Function Declaration
// Required when you define a function in one file and call the function in another
// or define the function after it is called
string printOut(string textToPrint);

int main()
{
    cout << average(42.0, 24.0) << "\n";
    cout << average(1.0, 2.0) << "\n";
    turnOffOn();
    turnOffOn("yes");
    cout << fancy_number(12, 3) << "\n";
    cout << fancy_number(12, 3, 19) << "\n";
    cout << fancy_number(13.5, 3.8) << "\n";
    cout << printOut("Hello!") << "\n";
}

string printOut(string textToPrint)
{
    string baseText = "This is the text I want to print: " + textToPrint;
    return baseText;
}
