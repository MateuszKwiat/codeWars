std::string reverse_words(std::string str) {
  std::string result = "";
  str += " ";
  auto pos = str.find(" ");
  
  while (pos != std::string::npos) {
    for (int i = pos; i >= 0; i--) {
      result += str[i];
    }
    
    str.erase(0, pos + 1);
    pos = str.find(" ");
  }
  
  result.erase(0, 1);
  
  return result;
}