#include <string>

std::string cleanString(const std::string &s) {
    std::string result = "";
    int skipCount = 0;
  
    for (auto it = s.rbegin(); it != s.rend(); it++) {
      if (*it == '#')
        skipCount++;
      else if (skipCount == 0)
        result += *it;
      else
        skipCount--;
    }
    
    reverse(result.begin(), result.end());
    
    return result; 
}