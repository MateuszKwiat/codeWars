// The Hamming Distance is a measure of similarity between two strings of equal length.
// Complete the function so that it returns the number of positions where the input strings do not match. 

// You can assume that the two inputs are ASCII strings of equal length.
#include <string>

unsigned hamming(const std::string &a, const std::string &b)
{
  int count_different = 0;
  for (int i = 0; i < a.size(); i++)
    if (a[i] != b[i])
      count_different++;
  
    return count_different;
}