#include <cmath>

long int findNextSquare(long int sq) {
  float sqr = std::sqrt(sq);
  if (sqr != static_cast<long int>(sqr))
    return -1;
    
  return static_cast<long int>(pow(sqr + 1, 2));
}