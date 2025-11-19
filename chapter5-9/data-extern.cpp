#include <iostream>

int d = 3;
int f = 5;

void print_data() {
    std::cout << "--- In data.cpp (via print_data) ---" << std::endl;
    std::cout << "d is currently: " << d << std::endl;
    std::cout << "f is currently: " << f << std::endl;
}