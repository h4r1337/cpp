#include <iostream>
using namespace std;

class shape {
protected:
  double dimension1, dimension2;
public:
  void get_data() {
    cout << "Enter dimension 1: ";
    cin >> dimension1;
    cout << "Enter dimension 2: ";
    cin >> dimension2;
  }
  virtual void display_area() {
    cout << "Area: " << dimension1 * dimension2 << endl;
  }
};

class triangle: public shape {
public:
  void display_area() {
    cout << "Area of triangle: " << 0.5*dimension1*dimension2 << endl;
  }
};

class rectangle: public shape {
public:
  void display_area() {
    cout << "Area of rectangle: " << dimension1*dimension2 << endl;
  }
};

int main() {
  triangle triangle_obj;
  rectangle rectangle_obj;
  cout << "Enter dimension for triangle: " << endl;
  triangle_obj.get_data();
  triangle_obj.display_area();
  cout << "Enter dimension for rectangle: " << endl;
  rectangle_obj.get_data();
  rectangle_obj.display_area();
  return 0;
}
