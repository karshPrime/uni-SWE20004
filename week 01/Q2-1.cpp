#include <iostream>

double to_celcius(int &fahrenheit);

int main() {
  std::cout << "Temperature Converter" << "\n" <<"Fahrenheit\t: ";
  int fahrenheit;
  std::cin >> fahrenheit;
  double celcius;
  celcius = to_celcius(fahrenheit);
  std::cout << "Celcius\t:" << celcius;
}

double to_celcius(int &fahrenheit) {
  return ((fahrenheit - 32) * (5.0/9.0));
}

