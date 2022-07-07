#include <iostream>

class Sentence
{
    int words = 1;
    Sentence()
    {
        // Blank default constructor, see below
    }
public:
    // Member initializer list syntax
    Sentence(int count) : words(count)
    {
    }
    // Objects have access to their own address through a "this" pointer
void printInfo(){
    // Inside a member function "this" may be used to refer to the invoking object
    std::cout << "There are " << this->words << " in this book." << std::endl;
    }

    // Overloaded operators are defined by the keyword "operator" followed by the symbol(+) being defined
    // It's not possible to alter the operators' precedence, grouping, or number of operands
    Sentence operator+(Sentence &obj)
    {
        // Declare a new object
        Sentence lines; // uses the default blank constructor
        // Assign the sum of the "this" object and the parameter object(obj) to the new object(lines)
        lines.words = this->words + obj.words;
        return lines;
    }
};

int main()
{
    Sentence draft(100);
    Sentence edits(1000);
    // draft is the "this" object and edits is the parameter object
    Sentence book = draft + edits;
    book.printInfo();
}
