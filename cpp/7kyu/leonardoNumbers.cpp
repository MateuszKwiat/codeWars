std::vector<int> L (int n, int L0, int L1, int add)
{
  std::vector<int> nums;
  nums.push_back(L0);
  nums.push_back(L1);
  int newNum;
  
  for (int i = 3; i <= n; i++) {
    newNum = nums[i - 2] + nums[i - 3] + add;
    nums.push_back(newNum);
  }
  
  return nums;
}