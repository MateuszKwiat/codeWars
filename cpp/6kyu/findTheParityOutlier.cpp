int FindOutlier(std::vector<int> arr)
{
    int mod = 0;
    if (arr[0] % 2 == 0 && arr[1] % 2 == 0) 
      mod = 1;
      
    else if (arr[0] % 2 != 0 && arr[1] % 2 != 0) 
      mod = 0;
  
    else {
      if (arr[2] % 2 == 0)
        mod = 1;
      else
        mod = 0;
    }
  
    for (auto it = arr.begin(); it != arr.end(); it++)
        if ((*it + mod) % 2 == 0)
          return *it;
}