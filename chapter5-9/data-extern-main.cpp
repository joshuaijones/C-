
#include <iostream>

extern int d;
extern int f;

extern void print_data();

int main() {
    std::cout << "--- In main.cpp ---" << std::endl;
    std::cout << "Before modification: d = " << d << ", f = " << f << std::endl; // d=3, f=5
    
    d = 99; 
    
    std::cout << "After modification: d = " << d << ", f = " << f << std::endl; // d=99, f=5
    
    print_data(); 
    
    return 0;
}