#include <string>
#include <vector>
#include <algorithm>

int find_short(std::string str) {
  std::vector<int> wordsVector;
  std::string temp;
  auto pos = str.find(" ");
  
  while (pos != std::string::npos) {
    temp = str.substr(0, pos);
    wordsVector.push_back(temp.size());
    str.erase(0, pos + 1);
    pos = str.find(" ");
  }
  
  wordsVector.push_back(str.size());
         
  return *std::min_element(wordsVector.begin(), wordsVector.end());   
}