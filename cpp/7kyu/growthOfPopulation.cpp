class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p) {
    int i = 0;
    while (p0 < p) {
      p0 += p0 * (percent/100) + aug;
      i++;
    }
    return i;
  }
};