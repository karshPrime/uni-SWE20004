#include <iostream>
int main() {
  int num1 = 2;
  int num2 = 4;
  int buffer;
  buffer = num1;
  num1 = num2;
  num2 = buffer;
// interchanged values of num1 and num2
  return 0;
}
