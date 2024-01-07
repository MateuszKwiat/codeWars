bool xorf(bool a, bool b)
{
  return a == b ? false : a || b;
}