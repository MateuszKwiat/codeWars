// Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string repeatString = "";
  for (size_t i = 0; i < repeat; i++)
    repeatString += str;
  
  return repeatString;
}