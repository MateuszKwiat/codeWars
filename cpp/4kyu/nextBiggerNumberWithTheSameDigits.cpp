#include <string>
#include <algorithm>

long nextBigger(long n) {
  std::string temp = std::to_string(n);
  std::next_permutation(temp.begin(), temp.end());
  
  return stol(temp) > n ? stol(temp) : -1;
}