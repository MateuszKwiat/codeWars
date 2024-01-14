#include <vector>
#include <algorithm>

int sum_of_minimums(const std::vector<std::vector<int>>& numbers) {
    int sum = 0;

    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        sum += *std::min_element((*it).begin(), (*it).end());
    }

    return sum;
}