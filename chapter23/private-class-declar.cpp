#include <iostream>

using namespace std;

class Box {
  double width; // This declaration is equivilent to sticking it under "private"
  public:
    double length; 
    void setLength( double len );
    double getLength( void );
    double getWidth( void );
    Box() : width(20.0), length(0.0) {}
  protected:
    
  private:
};

void Box::setLength( double len )
{
  length = len;
}

double Box::getLength( void )
{
  return length;
}

double Box::getWidth( void )
{
  return width;
}

int main()
{
  Box box;

  box.setLength(6.0);
  cout << "Length of box: " << box.getLength() << endl;

  box.length = 10.0; // ok because .length is public
  cout << "Length of box: " << box.length << endl;

  // box.width = 20.0; // will fail as its a private var
  // cout << box.width;
  cout << "Width of box: " <<  box.getWidth() << endl; // will succeed as it is a public function called

  return 0;
}
