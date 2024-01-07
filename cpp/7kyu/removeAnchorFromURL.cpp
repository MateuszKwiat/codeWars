std::string replaceAll(std::string str) {
  auto pos = str.find("#");
  
  return pos != std::string::npos ? str.erase(pos, str.size() - 1) : str; 
}