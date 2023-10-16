#include <vector>
std::vector<int> countBy(int x,int n){
  int multiplicand = x;
  int i = 0;
  std::vector<int> result;
  while (i++ < n) {
    result.push_back(multiplicand);
    multiplicand += x;
  }
  return result;
}