#include <iostream>
int main() {
  int int_inputs[10];
  float float_inputs[10];
  char char_inputs[10];

  // storing 10 int inputs
  for (int &int_input: int_inputs) {
    std::cin >> int_input;
  }

  // storing 10 float inputs
  for (float &float_input: float_inputs) {
    std::cin >> float_input;
  }

  // storing 10 char inputs
  for (char & char_input : char_inputs) {
    std::cin >> char_input;
  }
}
