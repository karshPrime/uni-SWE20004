#include <iostream>
#include <cmath>
double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);
int main() {
  double temperature;
  std::cout << "Enter Tempterature in Fahrenheit: " << std::endl;
  std::cin >> temperature;
  double celsius_temperature = fahrenheit_to_celsius(temperature);
  std::cout << "in celsius: " << celsius_temperature << "C" << std::endl;
  double kelvin_temperature = fahrenheit_to_kelvin(temperature);
  std::cout << "in kelvin: " << kelvin_temperature << "K" << std::endl;
}
// returns converted Celsius temperature
double fahrenheit_to_celsius(double temp) {
  double celsius = ((5.0/9.0)*(temp - 32));
  return round(celsius);
}
// returns converted Kelvin temperature
double fahrenheit_to_kelvin(double temp) {
  double kelvin = (5.0/9.0)*(temp - 32) + 273;
  return round(kelvin);
}
