#include <string>

std::string decodeMorse(const std::string& morseCode) {
    std::string cop = morseCode;
    cop += " ";
    std::string decoded;
    auto pos = cop.find(" ");
    while (pos != std::string::npos) {
      decoded += MORSE_CODE[cop.substr(0, pos)];
      if (cop[pos + 1] == ' ' && cop[pos + 2] == ' ')
        decoded += " ";
      
      cop.erase(0, pos + 1);
      pos = cop.find(" ");
    }
  
    while (decoded[0] == ' ' || decoded[decoded.size() - 1] == ' ') {
      if (decoded[0] == ' ')
        decoded.erase(0, 1);
      if (decoded[decoded.size() - 1] == ' ')
        decoded.erase(decoded.size() - 1);
    }
  
    return decoded;
}