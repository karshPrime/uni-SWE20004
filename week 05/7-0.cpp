#include <iostream>
float addition(float []);
float subtraction(float []);
float multiplication(float []);
float division(float []);
int main() {
// local variable declaration:
  char math_operator; float user_input[2]; float answer; std::string operation;
// input numerical values
  std::cout << "Enter the numbers: ";
  std::cin >> user_input[0];
  std::cin >> user_input[1];
// input operator
  std::cout << "Please enter the operator: ";
  std::cin >> math_operator;
  switch(math_operator) {
    case '+' :
      operation = "sum";
      answer = addition(user_input);
      break;
    case '-' :
      operation = "difference";
      answer = subtraction(user_input);
      break;
    case '*' :
      operation = "product";
      answer = multiplication(user_input);
      break;
    case '/' :
      operation = "quotient";
      answer = division(user_input);
      break;
    default : // if user inputs invalid operator
      std::cout << "Invalid Operator" << std::endl;
  }
  if (!operation.empty()) {
    std::cout << "The " << operation << " of " << user_input[0];
    std::cout << " and " << user_input[1] << " is: " << answer << std::endl;
  }
  return 0;
}
float addition(float user_inputs[]) {
  return (user_inputs[0] + user_inputs[1]);
}
float subtraction(float user_inputs[]) {
  return (user_inputs[0] - user_inputs[1]);
}

float multiplication(float user_inputs[]) {
  return (user_inputs[0] * user_inputs[1]);
}
float division(float user_inputs[]) {
  return (user_inputs[0] / user_inputs[1]);
}
