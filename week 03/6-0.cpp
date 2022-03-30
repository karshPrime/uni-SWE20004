#include <iostream>
int main() {
  std::cout << "Enter your age: " << std::endl;
  unsigned int user_age;
  std::cin >> user_age;
  if (user_age >= 16) {
    std::cout << "Yes- you can drive" << std::endl;
  }
  return 0;
}
