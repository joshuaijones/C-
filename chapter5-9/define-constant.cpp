#include <iostream>
using namespace std;

// defined vars are subsituted before compiling
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;
    const int modifier = 22;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    area *= modifier;
    cout << area;
    // cannot adjust the modifier as it was assiend a const
    // modifier = 24;
    return 0;
}