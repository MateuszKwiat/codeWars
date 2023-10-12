#include <string>

int square_digits(int num) {
  std::string stringResult = "";
  std::string temp;
  int tempNum;
  while (num >= 10) {
    tempNum = num % 10;
    num /= 10;
    temp = std::to_string(tempNum * tempNum);
    reverse(temp.begin(), temp.end());
    stringResult += temp;
  }
  temp = std::to_string(num * num);
  reverse(temp.begin(), temp.end());
  stringResult += temp;
  std::reverse(stringResult.begin(), stringResult.end());
  
  return std::stoi(stringResult);
}