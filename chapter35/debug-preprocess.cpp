#include <iostream>

// #if blocks code between from compling
#if 0
// This would define CUSTOM in the preprocess part of compling
#define CUSTOM 1
#endif

// This checks if CUSTOM is not yet defined
#ifndef CUSTOM
// If it is not defined, it sets the value to 0
  #define CUSTOM 0
#endif


using namespace std;

int main() {
  cout << CUSTOM << endl;

  return 0;
}
