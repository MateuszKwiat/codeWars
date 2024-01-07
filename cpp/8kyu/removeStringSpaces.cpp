#include <string>

std::string no_space(std::string x)
{
   std::string result;
   auto pos = x.find(" ");
  
  while (pos != std::string::npos) {
    result += x.substr(0, pos);
    x.erase(0, pos + 1);
    pos = x.find(" ");
  }
  
  result += x;
  
  return result;
}