#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> result;
  for (int i = start; i <= end; i++) {
    result.push_back(i);
  }
  
  return result;
}  