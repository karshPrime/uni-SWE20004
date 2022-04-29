#include <fstream>
#include <iostream>

using namespace std;

int main () {
  char data[100];
// opening a file in write mode.
  ofstream myfile;
  myfile.open("newFile.txt"); // added missing brackets

  cout << "Writing to the file" << endl;
  cout << "Enter your name: ";
  cin.getline(data, 100); // added missing brackets
  myfile << "Your Name is:";
  myfile << data << endl; // data is a variable
  cout << "Enter your age: ";
  cin >> data;
  cin.ignore();
  myfile << "Your Age is:";
  myfile << data << endl;

  // close the opened file.
  myfile.close();

  return 0;
} //removed */
