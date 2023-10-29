#include <string>
#include <vector>

std::vector<std::string> uniq(const std::vector<std::string>& v) {
    std::vector<std::string> result;
  
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i + 1])
            continue;
        else
            result.push_back(v[i]);
    }
  
    return result;
}