#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.empty())
      return std::vector<int> {};
  
    std::vector<int> res {0, 0};
    for (auto x : input) {
      if (x <= 0)
        res[1] += x;
      else
        res[0]++;
    }
  
    return res;
}