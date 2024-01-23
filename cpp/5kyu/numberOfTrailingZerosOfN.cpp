long zeros(long n) {
  if (n < 1)
    return 0;
  
  long count = 0;
  
  for (int i = 5; (n/i) >= 1; i *= 5)
    count += static_cast<long>(n/i);
  
  return count;
}