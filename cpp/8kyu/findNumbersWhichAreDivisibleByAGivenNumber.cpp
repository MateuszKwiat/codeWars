std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> result;
    for (auto x : numbers)
      if (x % divisor == 0)
        result.push_back(x);
  
    return result;
}