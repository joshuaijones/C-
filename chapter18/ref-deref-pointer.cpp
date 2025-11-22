#include <iostream>
using namespace std;

int main()
{
  int var = 20;
  int *ip;

  ip = &var;

  cout << "value of var variable: ";
  cout << var << endl;

  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  cout << "Value of *ip variable: ";
  cout << *ip << endl;

  cout << "Address of var" << endl;
  cout << &var << endl;
  return 0;
}
