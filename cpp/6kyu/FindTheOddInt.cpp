#include <vector>
#include <algorithm>

int findOdd(const std::vector<int>& numbers){
  std::vector<int> newNumbers(numbers);
  std::sort(newNumbers.begin(), newNumbers.end());
  int count = 1;
  for (int i = 1; i < newNumbers.size(); i++) {
    if (newNumbers[i] == newNumbers[i-1])
      count++;
    else {
      if (count % 2 == 1)
        return newNumbers[i-1];
      else
        count = 1;
    }
  }
  return newNumbers[newNumbers.size() - 1];
}