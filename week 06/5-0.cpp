#include <iostream>
#include <algorithm>

bool search(const char[], char &, int);
void print_array(const char[]);
void max_appeared(const char[]);

int main() {
  char alphabet[26]; // declaring 26-char long array
// assigning values to the array
  for (size_t i = 65; i < 91; i++) {
    alphabet[i-65] = char(i); // storing letter ascii
  }
  std::cout << "Enter 20 alphabets:\n";
  char user_input[20]; int counter = 0; char buffer_input;
  while (counter < 20) {
    std::cin >> buffer_input;
    buffer_input = toupper(buffer_input); // so that 'a' and 'A' are same
    if (search(alphabet, buffer_input, 26)) {
// search if the letter has been input already
      if (search(user_input, buffer_input, counter)) {
        std::cout << buffer_input << " is a duplicate letter.\n";
      }
// add input to the array of valid input
      user_input[counter] = buffer_input;
      counter++;
    } else {
      std::cout << buffer_input << " is not an alphabet\n";
    }
  }
  std::cout << "The original array is:\n";
  print_array(user_input);
  std::cout << "The sorted array is:\n";
  std::sort(user_input, user_input+20); // sort array
  print_array(user_input);
// print details about most occurred element with its count
  max_appeared(user_input);
}

// search for key in char_list
bool search(const char char_list[], char &search_key, int list_size) {
  for (size_t i = 0; i < list_size; i++) {
    if (search_key == char_list[i])
      return true;
  }
  return false;
}

// print all elements of an array
void print_array(const char to_print[]) {
  for (size_t i = 0; i < 20; i++) {
    std::cout << to_print[i];
  }
  std::cout << std::endl;
}

// print details about most occurred element with its count
void max_appeared(const char char_list[]) {
  std::string all_max;
  int current_max = 0;
  int counter = 0;
  for (size_t i = 0; i < 19; i++) {
    if (char_list[i] == char_list[i + 1]) {
      counter++;
    } else {
      counter = 0;
    }
    if (counter > current_max) {
      all_max = char_list[i];
      current_max = counter;
    } else if (counter == current_max) {
// if there are more than one element with highest occurrance count
      all_max += ", ";
      all_max.append(1, char_list[i]);
    }
  }
  std::cout << "The mode is(/are): " << all_max;
  std::cout << "; and it(/they) occurred " << current_max + 1 << " times.\n";
}