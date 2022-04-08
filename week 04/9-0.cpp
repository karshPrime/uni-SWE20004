#include <iostream>
int main() {
  int range; int multiplier;
  std::cout << "Enter the number: ";
  std::cin >> multiplier;
  std::cout << "Enter the range: ";
  std::cin >> range;
  for (int i = 1; i <= range; i++) {
    std::cout << multiplier << 'X' << i << '=' << multiplier*i << '\n';
  }
}
