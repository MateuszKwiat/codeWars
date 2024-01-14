#include <string>

std::string removeExclamationMarks(std::string str){
  std::string result = "";
  
  for (auto& x : str) {
    if (x != '!')
      result += x;
  }
  
  return result;
}