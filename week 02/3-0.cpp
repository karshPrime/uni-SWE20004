#include <iostream>
int main() {
  float subject_marks[5];
  float marks_total = 0;

  for (int i = 0; i < 5; i++) {
    std::cout << "Enter subject" << i + 1 << " marks: ";
    std::cin >> subject_marks[i];
    marks_total += subject_marks[i];
  }

  std::cout << "Sum: " << marks_total << std::endl;
  std::cout << "Average: " << marks_total / 5 << std::endl;
}
