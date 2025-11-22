#include <iostream>

using namespace std;

struct StructureExample
{
  char definition[50];
  char otherDefinition[50];
  int intDefinition;
} structureVar;

int main()
{
  struct StructureExample Struct1;
  struct StructureExample Struct2;

  strcpy( Struct1.otherDefinition, "Learning C++ Programming");
  Struct1.intDefinition = 4950;
  strcpy( Struct1.definition, "This is the definition");

  cout << "Struct1 definition: " << Struct1.definition << endl;
  cout << "Struct1 otherDefinition: " << Struct1.otherDefinition << endl;
  cout << "Struct1 intDefinition: " << Struct1.intDefinition << endl;
  
  return 0;
}
