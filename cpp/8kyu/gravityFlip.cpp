#include <vector>
#include <algorithm>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    std::vector<int> result = arr;
    dir == 'R' ? std::sort(result.begin(), result.end()) 
               : std::sort(result.begin(), result.end(), std::greater<>());
  
    return result;
}
