#include <string>
#include <cctype>

std::string alphabet_position(const std::string& text) {
    if (text.empty())
        return "";

    const int asciiPos = 96;
    std::string result;

    for (int i = 0; i < text.size(); i++) {
        if (isalpha(text[i])) {
            std::string temp = std::to_string(static_cast<int>(std::tolower(text[i])) - asciiPos);
            for (auto x : temp)
                result.push_back(x);
            result.push_back(' ');
        }
        else continue;
    }
    if (result.empty())
        return "";
    result.erase(result.size() - 1);
    return result;
}