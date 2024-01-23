#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  if (iterable.size() < 1)
    return {};
  
  std::vector<T> result;
  result.push_back(iterable[0]);
  
  for (int i = 1, j = 0; i < iterable.size(); i++) {
    if (iterable[i] != result[j]) {
      result.push_back(iterable[i]);
      j++;
    } 
  }
  
  return result;
  
}
std::vector<char> uniqueInOrder(const std::string& iterable) {
  if (iterable.size() < 1)
    return {};
  
  std::vector<char> result;
  result.push_back(iterable[0]);
  
  for (int i = 1, j = 0; i < iterable.size(); i++) {
    if (iterable[i] != result[j]) {
      result.push_back(iterable[i]);
      j++;
    }
  }
  
  return result;
}