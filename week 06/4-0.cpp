#include <vector>
int main() {
  std::vector<int> vec {10, 20, 30, 40, 50};
  vec.front() = 100;
  vec.back() = 1000;
}
