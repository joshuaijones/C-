#include <iostream>
#include <ctime>

using namespace std;

double vals[] = {10.1, 12,6, 33.1, 24.1, 50.0};

double& setValues( int i )
{
  return vals[i];
}

int& returnStaticRef()
{
  int q;
  //! return q; // Complile time error
  static int x;
  return x
}

int main()
{
  cout << "Value before change" << endl;
  for (int i=0; i < 5; i++)
  {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
  }

  cout << "-------------------" << endl;
  cout << "Values after change" << endl;
  setValues(1) = 20.73;
  setValues(3) = 70.8;

  for (int i=0; i < 5; i++)
  {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
  }

  return 0;
}
