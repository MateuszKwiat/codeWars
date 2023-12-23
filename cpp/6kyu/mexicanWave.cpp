#include <cctype>
#include <vector>

std::vector<std::string> wave(std::string y){
  std::vector<std::string> result;
  std::string temp;
  for (int i = 0; i < y.size(); i++) {
    if (isalpha(y[i])) { 
      temp = y;
      temp[i] = toupper(y[i]);
      result.push_back(temp);
    }
  }
  
  return result;
}