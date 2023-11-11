#include <vector>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
  if (numbers.size() == 0)
    return numbers;
  
  std::vector<unsigned int> result(numbers);
  int indexOfMin = 0;
  
  for (int i = 1; i < numbers.size(); i++) {
    if (numbers[i] < numbers[indexOfMin])
      indexOfMin = i;
  }
  
  result.erase(result.begin() + indexOfMin);
  
  return result;
}