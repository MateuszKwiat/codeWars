#include <vector>

float find_uniq(const std::vector<float>& v)
{
    for (int i = 1; i < v.size() - 1; i++) {
        if ((v[i] != v[i - 1]) && (v[i] != v[i + 1]))
            return v[i];
    }
    return v[0] != v[1] ? v[0] : v[v.size() - 1];
}