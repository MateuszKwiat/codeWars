std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    size_t index1;
    size_t index2;
    
    for (auto i = 0; i < numbers.size() - 1; i++) {
      for (auto j = i + 1; j < numbers.size(); j++) {
        if (numbers[i] + numbers[j] == target) {
          index1 = i;
          index2 = j;
          break;
        }
      }
    }
  
    return {index1, index2};
}