#include <iostream>
int main() {
  std::cout << "Enter your favorite number: ";
  int favo_num;
  std::cin >> favo_num;
  if (favo_num >= 0 and favo_num <= 100) {
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!! ";
    std::cout << favo_num << "is my favorite number!" << std::endl;
  }
}
