class WhichAreIn
{

  public:
  static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
    std::vector<std::string> result;
    
    for (auto x : array1) {
      for (auto y : array2) {
        auto pos = y.find(x);
        if (pos != std::string::npos) {
          result.push_back(x);
          break;
        }
      }
    }
    std::sort(result.begin(), result.end());
    
    return result;
  }
};
