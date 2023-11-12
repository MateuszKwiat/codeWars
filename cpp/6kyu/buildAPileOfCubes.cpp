class ASum
{
  public:
  static long long findNb(long long m){
    long long volume = 0;
    long long n = 1;
    while (volume < m) {
      volume += n * n * n;
      n++;
    }
  
    return volume == m ? n - 1 : -1;
  }
};
