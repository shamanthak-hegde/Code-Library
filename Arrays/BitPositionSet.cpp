bool checkBit(int num, int pos)
{
    pos = 1 << pos;
    if ((num & pos) != 0)
    {
        return true;
    }
    return false;
}