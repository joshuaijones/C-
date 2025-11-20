#include <iostream>
using namespace std;

int main() {
  int result = max(10, 200);
  cout << "Result: " << result << endl; 
}

int max(int num1, int num2) 
{
  int result;

  if ( num1 > num2 )
  {
    result = num1;
  }
  else {
    result = num2;
  }

  return result;
}
