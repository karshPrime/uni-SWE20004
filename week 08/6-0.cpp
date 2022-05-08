#include <iostream> // required to print values

// swapping values if first num > second num
void swap_small_first(int *x, int *y) {
  // swap algorithm without 3rd variable
  if (*x > *y) {
  *x += *y;
  *y = *x - *y;
  *x -= *y;
  }
}

// reorder 3 inputs integers
void reorder (int *a, int *b, int *c) {
  // calling swap function between two values at once
  swap_small_first(a, b);
  swap_small_first(b, c);
  swap_small_first(a, b);
}

int main() {
  // setting random numbers for testing
  int test[3] = {123, 53, 112};

  // assigning a pointer to each element
  int *a = &test[0]; int *b = &test[1]; int *c = &test[2];

  // using reorder function on all pointers
  reorder(a, b, c);

  // printing out values [testing purpose]
  std::cout << *a << " < " << *b << " < " << *c << std::endl;
}
