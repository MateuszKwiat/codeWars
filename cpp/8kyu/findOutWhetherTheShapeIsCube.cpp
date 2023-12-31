bool is_cube(int volume, int side)
{
    if (volume > 0 && side > 0)
      return volume == side * side * side;
    return false;
}