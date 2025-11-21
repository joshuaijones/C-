#include <iostream>
using namespace std;

int main()
{
  char str1[10] = "Hello";
  char str2[10] = "World";
  char str3[10];
  int len;

  strcpy(str3, str1);
  cout << "strcpy(str3, str1): " << str3 << endl;

  strcat(str1, str2);
  cout << "strcat(str1, str2): " << str1 << endl;

  len = strlen(str1);
  cout << "strlen(str1): " << len << endl;

  strcpy(str1, "Denis");
  strcpy(str2, "Denis");
  strcpy(str3, "Zebra");
 
  cout << "str1: " << str1 << endl;
  cout << "str2: " << str2 << endl;
  cout << "str3: " << str3 << endl;
  cout << "strcmp(str1, str2): " << strcmp(str1,str2) << endl;
  cout << "strcmp(str1, str3): " << strcmp(str1,str3) << endl;

  cout << strstr(str1, str1) << endl;
  // The following is danderous as it tries to read outside the range of the string
  // cout << strstr(str1, str3) << endl;

  char* searchPointer = strstr(str1, str3);
  if (searchPointer != nullptr)
  {
    cout << "Found str3 in str1!" << endl;
  } else {
    cout << "Null Pointer Returned!" << endl;
  }

  return 0;

}
