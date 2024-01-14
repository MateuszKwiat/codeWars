#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights)
{
  pair<int, int> weightsSum;
  
  for (int i = 0; i < weights.size(); i++) {
    (i + 1) % 2 != 0 ? weightsSum.first += weights[i] : weightsSum.second += weights[i];
    }
  
  return weightsSum;
}