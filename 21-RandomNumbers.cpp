#include <iostream>
#include <ctime>
using namespace std;

int main(){
srand(time(0));

// Random number in a range between 0 and 99
int randomInt = rand() % 100;
cout << randomInt << endl;

// Random floating point number between 0 and 9.9
float randomFloat = (rand() % 100) / 10.0;
cout << randomFloat << endl;
}
