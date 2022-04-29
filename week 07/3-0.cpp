#include <iostream> // missing iostream, require for cout
#include <fstream>

using namespace std;

int main () {
  string line;
  ifstream myfile("input1.txt");
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      cout << line << '\n';
    }
    myfile.close();
  } else cout << "Unable to open file"; // added missing }

  return 0;
}// missing }
