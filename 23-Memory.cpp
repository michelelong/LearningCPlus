// Dynamic memory allocation, cannot be performed without pointers
#include <iostream>
using namespace std;

int main()
{
/*
Stack: Local variables and called functions
Heap: Dynamically allocate the memory used when the program runs
*/
    int *ptr = new int;   // allocate memory at the address returned by new, store as a pointer
    *ptr = 5;             // dereference to assign a value
    cout << *ptr << endl; // dereference to view value
    delete ptr;           // release the memory, turns ptr into a dangling pointer
    cout << "Still accessible: " << *ptr << endl;
    ptr = nullptr; // nullptr assignment prevents accessing random data in memory
    /*
The pointer (ptr) is stored in the stack as a local variable, and holds the heap's allocated
address as its value.

Forgetting to free up memory that has been allocated with the new keyword will result
in memory leaks, because the memory remains allocated until the program exits.
*/
}
