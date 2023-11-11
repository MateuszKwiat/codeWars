#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for (auto& x : numbers) {
      sum += x * x;
    }
  
    return sum;
}