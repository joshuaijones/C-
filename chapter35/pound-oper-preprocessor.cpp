#include <iostream>

using namespace std;

#define MKSTR( x ) #x

int main() {
  cout << MKSTR(Not sure when I would use this...) << endl;

  return 0;
}
