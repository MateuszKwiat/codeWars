#include <algorithm>

int stray(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    return numbers[0] != numbers[numbers.size()/2] ? numbers[0] : numbers[numbers.size() -1];
};