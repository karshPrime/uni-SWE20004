#include <iostream>
int main() {
  int inputs[10];
// taking input
  for (int & input : inputs) {
    std::cin >> input;
  }
// printing output
  for (int & input : inputs) {
    std::cout << input << '\n';
  }
}
