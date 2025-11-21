#include <iostream>
using namespace std;

int main()
{
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char easyGreeting[6] = "Hello";
  cout << "Greeting message: ";
  cout << greeting << endl;
  cout << easyGreeting << endl;

  return 0;
}
