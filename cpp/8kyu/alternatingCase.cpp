#include <cctype>
#include <string>

std::string to_alternating_case(const std::string& str)
{
  std::string result = "";
	for (auto& ch : str) {
    if (isalpha(ch)){
      if (islower(ch))
        result += toupper(ch);
      else
        result += tolower(ch);
    }
    
    else 
      result += ch;
  }
  
  return result;
}