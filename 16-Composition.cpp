#include <iostream>
using namespace std;

// Composition is used for objects with a has-a relationship
class Birthday {
    int month;
    int day;
    int year;
    public:
        Birthday(int m, int d, int y): month(m), day(d), year(y)
        {
        }
        void printDate()
        {
            cout << month << "/" << day << "/" << year << endl;
        }
};

// A Person has-a Birthday
// Contains another class (birthday) that together composes an object (person)
class Person {
    string name;
    Birthday bd;
    bool likesYou;
    public:
        Person(string n, Birthday b): name(n), bd(b), likesYou(false)
  {
  }

    void printInfo(){
        cout << name << endl;
        bd.printDate();
    }
};

int main(){
    Birthday bd(11, 04, 1974);
    Person p("Michele", bd);
    p.printInfo();
}
