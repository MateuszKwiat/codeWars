#include <vector>

bool isPrime(unsigned a) {
  for (unsigned i = 2; i <= a/2; i++)
    if (a % i == 0)
      return false;
  
  return true;
}

std::vector<unsigned> prime(unsigned n){
  std::vector<unsigned> result;
  
  for (unsigned i = 2; i <= n; i++) 
    if (isPrime(i)) 
      result.push_back(i);
    
  return result;
}