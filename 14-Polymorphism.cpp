// Polymorphism means that a class method can have more than one implementation
#include <iostream>
using namespace std;

class Polygon
{
protected:
  int width, height;

public:
  void set_values(int a, int b)
  {
    width = a;
    height = b;
  }

  /* Methods can be overridden without virtual, but you get "early binding". The
     implementation of the method used is decided at compile time based on the type
     of the calling pointer

     With virtual you get "late binding". The implementation of the method used is
     decided at run time based on the type of the pointed-to object
  */
 
  virtual int area()
  {
    return 0;
  }
};

class Rectangle : public Polygon
{
public:
  int area()
  {
    return width * height;
  }
};

class Triangle : public Polygon
{
public:
  int area()
  {
    return width * height / 2;
  }
};

int main()
{
  Rectangle rect;
  Triangle trgl;
  // a pointer to a derived class (Rectangle & Triangle) is type-compatible
  // with a pointer to its base class (Polygon)
  Polygon *ppoly1 = &rect;
  Polygon *ppoly2 = &trgl;

  // because ppoly1 and ppoly2 are pointers to Polygon, Rectangle and Triangle methods can't be accessed
  ppoly1->set_values(4, 5);
  ppoly2->set_values(4, 5);

  // area methods of both objects are access directly instead of through pointers
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';

  Polygon *ppoly3 = &poly;
  ppoly3->set_values(4, 5);
  cout << ppoly3->area() << '\n';
  return 0;
}
