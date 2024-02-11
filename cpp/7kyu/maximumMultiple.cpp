int maxMultiple(int divisor, int bound) 
{
  while (bound > 0) {
    if (bound % divisor == 0)
      return bound;
    
    bound--;
  }
}