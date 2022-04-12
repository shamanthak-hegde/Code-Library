string swapString(string s, int i, int j)
{

    char a = s[i];
    s[i] = s[j];
    s[j] = a;
    return s;
}