std::string reverse_letter(const std::string &str)
{
    std::string result = "";
  
    for (auto it = str.rbegin(); it != str.rend(); it++) {
      if (isalpha(*it))
        result += *it;
    }
  
    return result;
}