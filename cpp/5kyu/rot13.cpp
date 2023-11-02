#include <string>
#include <cctype>

std::string rot13(std::string msg)
{
	int charValue;
	for (int i = 0; i < msg.size(); i++) {
		if (isalpha(msg[i])) {
			charValue = static_cast<int>(msg[i]);
			charValue += 13;
			if (((charValue > 90) && (charValue < 103)) || charValue > 122) {
				charValue -= 26;
			}
			msg[i] = static_cast<char>(charValue);
		}
	}
	return msg;
}