// iostream header contains string and other basic input/output objects
#include <iostream>
// A namespace provides scope & prevents name collisions
// std namespace includes features of the C++ Standard Library
using namespace std;

/*
g++ hello.cpp -o hello to compile from the cli
./hello to execute the compiled code
*/

// main function return type integer
int main()

{

  // Print to standard output (cout)
  // Insertion operator to redirect strings/variables (<<)
  // Newline (endl)
  cout << "Hello world!" << endl;

  // main function return everything is ok (0)
  return 0;
}
