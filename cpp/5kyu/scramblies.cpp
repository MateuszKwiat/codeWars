#include <string>
#include <map>

bool scramble(const std::string& s1, const std::string& s2) {
	std::map<char, int> s1CharsMap;

	for (auto x : s1) {
		if (s1CharsMap.find(x) == s1CharsMap.end())
			s1CharsMap[x] = 1;
		else
			s1CharsMap[x]++;
	}

	for (auto x : s2) {
		if (s1CharsMap.find(x) == s1CharsMap.end() || s1CharsMap[x] <= 0)
			return false;
		else {
			s1CharsMap[x]--;
			continue;
		}
	}
	
	return true;
}