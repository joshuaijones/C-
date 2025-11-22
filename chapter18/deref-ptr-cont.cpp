#include <iostream>

using namespace std;

const int MAX = 4;

int main()
{
  const char *names[MAX] = {
                        "Benny Boggins",
                        "Henry Shaprio",
                        "Trevor McDouglas",
                        "Bill McFarlen"
  };

  for (int i = 0; i < MAX; i++)
  {
    cout << "Value of names [" << i << "] = ";
    cout << names[i] << endl;
  }
  return 0;
}
