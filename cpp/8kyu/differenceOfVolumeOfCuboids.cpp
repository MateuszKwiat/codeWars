#include <array>
#include <cmath>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
  int prod1 = 1;
  int prod2 = 1;
  
  for (auto i = 0; i < a.size(); i++) {
    prod1 *= a[i];
    prod2 *= b[i];
  }
  
  return abs(prod1 - prod2);
}