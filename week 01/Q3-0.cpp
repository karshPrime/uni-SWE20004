#include <iostream>

using std::cout, std::endl, std::cin, std::string;

int main() {
  string user_input;
  cout << "Enter some text: " << endl;
  getline(cin, user_input);

  cout << endl << "You have entered:" << endl;
  cout << user_input << endl;
return 0;
}

