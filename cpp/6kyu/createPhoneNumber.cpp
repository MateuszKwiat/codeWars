#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string phoneNumber = "";
  int i = 0;
  phoneNumber += "(";
  
  while (i < 3) {
    phoneNumber += std::to_string(arr[i]);
    i++;
  }
  
  phoneNumber += ") ";
  while (i < 10) {
    phoneNumber += std::to_string(arr[i]);
    if (i == 5)
      phoneNumber += "-";
    i++;
  }
  
  return phoneNumber;
}