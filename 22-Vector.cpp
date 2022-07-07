#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // A vector is like an ArrayList in Java
    vector<char> testing;

    // Push value onto the end of the array
    testing.push_back('A');
    testing.push_back('B');
    testing.push_back('C');

    // Initialize with a specific size
    vector<int> numbers(5);

    // Access values with standard zero based index
    cout << "Letter: " << testing[0] << endl;

    // Remove element at end of the array, does not return value
    testing.pop_back();

    // Size method
    cout << "The array has " << testing.size() << " elements." << endl;

}
