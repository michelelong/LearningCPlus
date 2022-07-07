#include <iostream>
using namespace std;

class MakeFriends
{
private:
    bool beNice;
    // Declaring a function as a friend allows it to access private members
    friend void makeNice(MakeFriends &obj);

public:
    MakeFriends()
    {
        beNice = false;
    }
}; // MakeFriends class ends here

// This function has access to the MakeFriends private members because it has been
// declared a friend inside the class definition above
void makeNice(MakeFriends &obj)
{
    obj.beNice = true;
    cout << boolalpha << obj.beNice << endl;
}
