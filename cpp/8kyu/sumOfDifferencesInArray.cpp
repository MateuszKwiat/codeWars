#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr){
    if (arr.size() < 2)
      return 0;
  
    int sum = 0;
    std::vector<int> marr = arr;
    std::sort(marr.begin(), marr.end(), std::greater<>());

    for (int i = 0; i < marr.size() - 1; i++) {
        sum += marr[i] - marr[i + 1];
    }

    return sum;
}