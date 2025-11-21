#include <iostream>
using namespace std;

int main()
{
  double *p;
  double balance[10] = {0,1,1,1,1,1,1,1};

  p = balance;
  cout << *(p + 1) << endl;
}
