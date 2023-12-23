#include <cmath>
bool is_even(double n)
{
    return n == round(n) && static_cast<int>(round(n)) % 2 == 0 ? true : false;
}
