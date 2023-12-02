#include <string>

std::string sliceString(std::string str) {
	str.erase(str.begin());
	str.erase(str.end() - 1);
	return str;
}