#include <iostream>

using namespace std;

const int MAX = 3;

int main()
{
  int var[MAX] = {10, 100, 200};

  for (int i = 0; i < MAX; i++)
  {
    *var = i; // Replace the first value of the array to be equal to i
    cout << "Array: " << endl;
    cout << var[0] << endl;
    cout << var[1] << endl;
    cout << var[2] << endl;

    // var++; // This is invalid. You cannot increment an array
  }
}
