#include <iostream>
using namespace std;
int main() {
   int a = 21;
   int b = 10;
   int c ;
    c = a + b;
    cout << "Line 1 - Value of c is :" << c << endl ; 
    c = a - b;
    cout<<"Line2 - Value of c is :"<<c<<endl; 
    c = a * b;
    cout << "Line 3 - Value of c is :" << c << endl ; 
    c = a / b;
    cout<<"Line4-Value of c is :"<<c<<endl; 
    c = a % b;
    cout<<"Line5 - Value of c is :"<<c<<endl; 
    c = a++;
    cout << "Line 6 - Value of c is :" << c << endl ;
    c = a--;
    cout<<"Line7 - Value of c is :"<<c<<endl; 
    return 0;
}