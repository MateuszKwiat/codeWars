#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  for (auto x : arr)
    if (x > limit)
      return false;
  
  return true;
}