#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
  int sum = 0;
  for (auto x : arr) 
    sum += x;
  
  return sum % 2 ? "odd" : "even";
}