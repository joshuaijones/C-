#include <iostream>

using namespace std;


class Box {
  public:
    Box(double h=1, double w=1, double b=1) {
      height = h;
      width = w;
      breadth = b;
    }
    double getVolume(void) {
      return height * width * breadth;
    }
  private:
    double height;
    double width;
    double breadth;
};


int main() {
  Box box1(10,20,30);
  // cout << box1.height << endl; // will draw error
  int vol;
  vol = box1.getVolume();

  cout << "Volume: " << vol << endl;
}
