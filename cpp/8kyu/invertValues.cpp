#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  for (auto& x : values)
    x *= -1;
  
  return values;
}