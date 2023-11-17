#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (auto x : seq) {
      if (x == elem)
        return true;
    }
    return false;
}