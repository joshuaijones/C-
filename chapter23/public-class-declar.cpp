#include <iostream>

using namespace std;

class Line {
  public:
    double length; 
    void setLength( double len );
    double getLength( void );
  protected:
    
  private:
};

void Line::setLength( double len )
{
  length = len;
}

double Line::getLength( void )
{
  return length;
}

int main()
{
  Line line;

  line.setLength(6.0);
  cout << "Length of line: " << line.getLength() << endl;

  line.length = 10.0; // ok because .length is public
  cout << "Length of line: " << line.length << endl;

  return 0;
}
