#include <iostream>

using namespace std;

class ExampleClass {
  public:
    int var1;
    char var2;
    ExampleClass() {
      cout << "ExampleClass Constructor called!" << endl;
    }
    ~ExampleClass() {
      cout << "ExampleClass deconstructor called!" << endl;
    }
};

int main() {
  ExampleClass* exampleClassObject = new ExampleClass[3];
  
  delete [] exampleClassObject;
  
  return 0;
}
