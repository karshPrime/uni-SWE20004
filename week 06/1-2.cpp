#include <iostream>
#include <vector>
int main() {
  std::vector<int> print_numbers = {3, 5}; // creating a vector with
// 2 elements= 3 and 5
  print_numbers.push_back(7); // appending vector with an element of
// value 7
  std::cout << print_numbers.size() << std::endl; // printing out the
// vector’s size
}
