#include <iostream>
#include <fstream>

void save_new(short);
void display_data(short);

int main() {
  short user_option; // variable to store user input
  // displaying menu
  std::cout << "Press 1: Enter new student details to the record\n";
  std::cout << "Press 2: Enter new staff details to the record\n";
  std::cout << "Press 3: Display Student records\n";
  std::cout << "Press 4: Display Staff records\n";
  std::cout << "$ ";
  std::cin >> user_option;

  // triggering different actions for different user input
  switch (user_option) {
    case 1:
      save_new(0);
      break;
    case 2:
      save_new(1);
      break;
    case 3:
      display_data(0);
      break;
    case 4:
      display_data(1);
      break;
    default: // if user enters an input other than 1 2 3 4
      std::cout << "INVALID INPUT\n";
      break;
  }
}

// displays a prompt and stores the input
void save_input(const std::string &prompt, std::fstream &file) {
  std::string buffer;     // temporary storage for user input
  std::cout << prompt;    // displaying requested data

  // user input might contain spaces; hence using getline
  std::getline(std::cin, buffer);

  // saving buffer to file with eol
  file << buffer << '\n';
}

void save_new(short option) {
  std::cin.ignore(100, '\n'); // removing empty char from last (line 14) cin.
  std::string student_tutor[2] = {"student", "tutor"}; // differentiating between student & tutor from argument
  std::string grade_timetable[2] = {"grade", "timetable"}; // grade for student, timetable for tutor
  std::string filename = student_tutor[option] + ".txt"; // generating file name from student_tutor array

  // initiating file write in append mode
  std::fstream file_modify;
  file_modify.open(filename, std::ios::app);

  // asking user for data and storing it in file
  save_input(("Enter " + student_tutor[option] + " ID: "), file_modify);
  save_input(("Enter " + student_tutor[option] + " name: "), file_modify);
  save_input(("Enter " + student_tutor[option] + " Course Details: "), file_modify);
  save_input(("Enter " + student_tutor[option] + " units: "), file_modify);
  save_input(("Enter " + student_tutor[option] + " " + grade_timetable[option] + ": "), file_modify);

  // closing the file after operation
  file_modify.close();
}

void display_data(short option) {
  std::string student_tutor[2] = {"student", "tutor"}; // differentiating between student & tutor from argument
  std::string grade_timetable[2] = {"grade", "timetable"}; // grade for student, timetable for tutor
  std::string filename = student_tutor[option] + ".txt"; // generating file name from student_tutor array

  // list of data type heading
  std::string content_type[5] = {"\nID", "Name", "Course Details", "Units", grade_timetable[option]};

  // variable to store single line content
  std::string line_content;

  // counter to keep record of line number
  std::size_t line_num = 0;

  // initiating file write in append mode
  std::fstream file_read;
  file_read.open(filename, std::ios::in);
  if (file_read.is_open()) {
    while (std::getline(file_read, line_content, '\n')) {
      std::cout << content_type[line_num%5] << ": " << line_content << '\n';
      line_num++;
    }
    file_read.close();
  } else {
    std::cout << "File not found!\n";
  }
}
