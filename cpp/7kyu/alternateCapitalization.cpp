#include <string>
#include <utility>
#include <cctype>
std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::string str1 = "";
    std::string str2 = "";
  
    for (int i = 0; i < s.size(); i++) {
      if (i % 2 == 0) {
        str1 += toupper(s[i]);
        str2 += tolower(s[i]);
      }
      else {
        str1 += tolower(s[i]);    
        str2 += toupper(s[i]);
      }
    }
  
    return {str1, str2};
}