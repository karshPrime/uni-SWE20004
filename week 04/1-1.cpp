#include <iostream>
int main() {
  std::string password = "";
  while (password.size() < 8) {
    std::cout << "\nEnter strong password: ";
    std::cin >> password;
  }
}
