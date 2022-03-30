#include <iostream>
#include <cmath>
int main() {
  const double PI = 3.14159;
  double current, emf, resistance, frequency, inductance, capacitance;
  std::cout << "Enter for EMF (volts): ";
  std::cin >> emf;

  std::cout << "Enter Resistance (Ohms): ";
  std::cin >> resistance;

  std::cout << "Enter for Frequency of current (Hz): ";
  std::cin >> frequency;

  std::cout << "Enter for Induction (henrys): ";
  std::cin >> inductance;

  std::cout << "Enter value for Capacitance (Farads): ";
  std::cin >> capacitance;

  double f2pi = 2 * PI * frequency;
  current = emf / (sqrt(pow(resistance, 2) + pow(((f2pi*inductance) –
           (1/(f2pi*capacitance))), 2)));

  std::cout << "Current: " << current << "Amps" << std::endl;

  return 0;
}
