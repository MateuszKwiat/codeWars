// **************************************** UNFINISHED **************************************** 

#include <string>
#include <set>

void swap(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

long nextBigger(long n) {
	std::string numAsString = std::to_string(n);
	std::set<char> stringAsSet(numAsString.begin(), numAsString.end());

	if (numAsString.size() == 1 || stringAsSet.size() == 1)
		return -1;
	else if (numAsString.size() == 2) {
		swap(numAsString[0], numAsString[1]);
		return stoul(numAsString);
	}

	for (int i = numAsString.size() - 1; i > 0; i--) {
		if (numAsString[i] < numAsString[i - 1]) {
			swap(numAsString[i], numAsString[i - 1]);
		}
		if (stoul(numAsString) <= n) {
			for (int j = numAsString.size() - 2; j > 0; j--) {
				if (numAsString[j] > numAsString[j - 1]) {
					swap(numAsString[j], numAsString[j - 1]);
					break;
				}
			}
		}
		else
			break;
	}

	n = stoul(numAsString);
	return n;
}