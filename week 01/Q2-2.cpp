#include <iostream>

double get_area(unsigned short int);

int main() {
  std::cout << "Enter radius: ";
  unsigned short int radius;
  std::cin >> radius;

  double area = get_area(radius);
  std::cout << "Area for circle with radius " << radius << " is: " << area << std::endl;

  return 0;
}

double get_area(unsigned short int radius) {
  return (3.142 * radius * radius);
}
