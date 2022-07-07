// Templates slow down compile time, but speed up the execution time
// Define functions in header
// Call and return any type instead of function overloading
#include <iostream>
using namespace std;

// Function template
template <typename T>
T sumNums(T num1, T num2)
{
    return num2 + num1;
};

// multiple generic data types
template <class T, class U>
T getSmallest(T numA, U numB) {
  return (numA < numB ? numA : numB);
}

// Class template
template <class T>
class Pair {
    private:
    T first;
    T second;
    public:
    // Type will be defined when object is instantiated
    Pair (T a, T b): first(a), second(b)
    {
        // Initalizing constructor
    }

    // Function declaration
    T bigger();
};

// Function definition when using separate header and source files
template <class T>
T Pair<T>::bigger() {
    return (first > second ? first : second);
}

template <class T>
class Specialize {
 public:
  Specialize (T x) {
   cout << x << " -  not a char." << endl;
  }
};

// Template specialization defines a different implementation for a specific type
template < >
class Specialize<char> {
 public:
  Specialize (char x) {
   cout << x << " is a char!" << endl;
  }
};

int main()
{
    cout << sumNums(100, 60) << "\n";
    cout << sumNums(2543.2, 3254.3) << "\n";

    int x=72;
    double y=15.34;
    // Returns an integer, because the template return type matches the first argument passed (int)
    cout << getSmallest(x, y) << endl;

    // Returns a double this time, because first argument is a double
    cout << getSmallest(y, x) << endl;

    Pair <int> intPair(11, 22);
    cout << intPair.bigger() << endl;

    Pair <double> doublePair(23.43, 5.68);
    cout << doublePair.bigger() << endl;

    Specialize<int> ob1(42);
    Specialize<double> ob2(5.47);
    Specialize<char> ob3('s');
}
