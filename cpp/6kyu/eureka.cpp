#include <vector>
#include <string>
#include <cmath>

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
  std::vector<unsigned int> result;
  unsigned int sum = 0;
  unsigned int temp;
  int size;
  std::string tempStr;
  
  for (unsigned int i = a; i < b; i++) {
    temp = i;
    tempStr = std::to_string(temp);
    size = tempStr.size();
    
    while (temp > 0) {
      sum += pow(temp % 10, size--);
      temp /= 10;
    }
    if (sum == i)
      result.push_back(i);
    
    sum = 0;
  }
  
  return result;
}