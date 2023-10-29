#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int sum = 0;
  for (auto x : classPoints)
    sum += x;
  
  int avg = (sum + yourPoints) / classPoints.size();
  
  return yourPoints >= avg;
}