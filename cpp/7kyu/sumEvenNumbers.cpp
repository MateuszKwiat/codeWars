#include <vector>

int sum_even_numbers(const std::vector<double> &seq) {
  int sum = 0;
  for (auto x : seq) {
    if (x - static_cast<int>(x) == 0.0 && static_cast<int>(x) % 2 == 0)
      sum += x;
  }
  
  return sum;
}