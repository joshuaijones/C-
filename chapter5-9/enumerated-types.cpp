#include <iostream>
using namespace std;

int main()
{
    enum color { red, green, blue } c;
    c = blue;
    cout << "c = " << c << endl;
    c = green;
    cout << "c = " << c << endl;
    c = red;
    cout << "c = " << c << endl;
    // This next line is invalid because purple is not defined in the enum
    // c = purple;
    // cout << "c = " << c << endl;
    return 0;  
}