#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
    std::string result = "";
    int residue = NULL;
    int sum = NULL;

    for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--) {
        sum += (i >= 0 ? int(a[i] - '0') : 0);
        sum += (j >= 0 ? int(b[j] - '0') : 0);
        sum += residue;

        if (sum > 9) {
            residue = 1;
            sum -= 10;
        }
        else
            residue = 0;

        result.insert(0, std::to_string(sum));
        sum = 0;
    }

    if (residue > 0)
        result.insert(0, std::to_string(residue));

    return result;
}