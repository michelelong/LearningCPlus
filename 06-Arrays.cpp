#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // Array is fixed in size
    // Create and initialize an array of 3 elements
    int array1[] = {12, 2, 28};

    const int SIZE = 10;

    // Create an array of 10 elements and set them all to 0
    int array2[SIZE] = {0};

    // type int is 4 bytes, array size is 10, 10 * 4 = 40
    cout << "The int data type is " << sizeof(int) << " bytes and the array has " << sizeof(array2) / sizeof(*array2) << " elements." << std::endl;
    cout << sizeof(int) << " x " << sizeof(array2) / sizeof(*array2) << " equals " << sizeof(array2) << " bytes total." << std::endl;

    // Initialize only the first element in the array to 7, and the remaining elements will be set to 0
    int array3[SIZE] = {7};

    // Set the first 3 elements to 5, 6, 7, and the remaining elements will be set to 0
    int array4[SIZE] = {5, 6, 7};

    // Dangerous no initialization
    // Elements in the array will contain whatever garbage is in the memory location
    int array5[SIZE];

    // Initializes array with one character in each index
    char array6[] = "Fred";

    // Multi-dimensional (nested) array of 2 rows and 3 columns
    int array7[2][3] = {{2, 3, 4}, {8, 9, 10}};
    //      C0   C1   C2
    // R0   2    3    4
    // R1   8    9   10

    // Loop through array with std for
    int codes[5] = {123, 0101, 42, 68, 65};
    for (int i = 0; i < 5; i++)
    {
        cout << codes[i] << endl;
    }

    // Range based for loops
    string strArr[] = {"Dolly", "Clyde", "Daisy"};
    for (auto &item : strArr) // access by reference
    {
        cout << item << " " << endl;
    }

    for (auto i : strArr) // access by value, the type of i is int
    {
        cout << i << ' ' << endl;
    }

    for (auto &&i : strArr) // access by forwarding reference, the type of i is int&
    {
        cout << i << ' ' << endl;
    }

    // Parallel Arrays
    // Data in more than one array is related

    int students[5]; // grades[0] is related to studentID[0]
    char grades[5];

    int noOfStudents = 0;
    ifstream infile("students.txt");                          // Open a space delimited file
    infile >> students[noOfStudents] >> grades[noOfStudents]; // Enter first line of file into [0] of both arrays
    while (infile && noOfStudents < 5)
    {
        noOfStudents++;
        infile >> students[noOfStudents] >> grades[noOfStudents];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Student: " << students[i] << "\tGrade: " << grades[i] << endl;
    }
}
