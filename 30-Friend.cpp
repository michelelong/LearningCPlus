#include "30-Friend.hpp"

int main()
{
    // Create an object instance
    MakeFriends clyde;
    // Use function declared as a friend to access a private variable or method
    makeNice(clyde);
}
