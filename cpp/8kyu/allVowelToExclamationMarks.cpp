#include <string>

std::string replace(const std::string &s)
{
  std::string result = s;
  std::string vowels = "aeiouAEIOU";
  
  for (auto& ch : result) 
    if (vowels.find(ch) != std::string::npos) 
      ch = '!';
  
  return result;
}