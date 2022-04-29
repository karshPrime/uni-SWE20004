#include <iostream>
#include <fstream> // replaced second iostream with fstream

using namespace std;

int main () {
  ofstream my_file;
  my_file.open("input1.txt");
  if (!my_file) {
    cout << "File not created!";
  } else {
    cout << "File created successfully!";
    my_file << "Student Marks\n\n";
    my_file <<
            "English\tMaths\tScience\n100\t50\t75\n175\t60\t75\n100\t50\t75 ";
    my_file.close();
  }
  return 0; // got return 0 out of if-condition
} // added missing } at the end
