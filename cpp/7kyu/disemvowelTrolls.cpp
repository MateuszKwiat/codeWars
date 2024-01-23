# include <string>

std::string disemvowel(const std::string& str) {
    const std::string vowels = "aeiou";
    std::string result = "";
  
    for (auto x : str)
      if (vowels.find(tolower(x)) == std::string::npos)
        result += x;
  
    return result;
}