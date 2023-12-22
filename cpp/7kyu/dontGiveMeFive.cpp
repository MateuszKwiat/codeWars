#include <string>

int dontGiveMeFive(int start, int end)
{
    int count = 0;

    for (int i = start; i <= end; i++) {
        std::string numAsStr = std::to_string(i);

        if (numAsStr.find('5') != std::string::npos) {
            std::cout << i << std::endl;
            continue;
        }
        else
            count++;
    }

    return count;
}