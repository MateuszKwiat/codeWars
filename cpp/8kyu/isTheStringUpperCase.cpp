#include <string>

bool is_uppercase(const std::string& s) {
    for (auto x : s) {
        if (!isupper(x) && isalpha(x))
            return false;
    }

    return true;
}