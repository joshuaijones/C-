#include <iostream>

using namespace std;

double division(int a, int b) {
  if( b == 0 ) {
    throw "Division by zero condition!";
  }
  return (a/b);
};


int main() {
  try {
    division(10, 0);
  } catch (const char* msg) {
    cout << "Error: " << msg << endl;
  }
}
