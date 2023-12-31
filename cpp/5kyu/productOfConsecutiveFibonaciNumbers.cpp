#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod) {
    std::vector<ull> result;
    ull fn1 = 1;
    ull fn2 = 1;
    ull temp = 0;
    
    while (fn1 * fn2 <= prod) {
      if (fn1 * fn2 == prod) { break; }
      
      temp = fn2 + fn1;
      fn1 = fn2;
      fn2 = temp;
    }
    
    result.push_back(fn1);
    result.push_back(fn2);
    fn1 * fn2 == prod ? result.push_back(1) : result.push_back(0);
    
    return result;   
  }
};