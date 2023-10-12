#include <string>
#include <cmath>

std::string seriesSum(int n)
{
  float sum = 0.f;
  float denominator = 1.f;
  for (int i = 0; i < n; i++) {
    sum += 1/denominator;
    denominator += 3.f;
  }
  sum = std::round(sum * 100.f) / 100.f;
  std::string temp = std::to_string(sum);
  
  return std::string(temp.begin(), temp.begin() + 4);
}