#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int flag = 0, num = 0, c = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (s[c] == t[i])
        {
            c++;
        }
    }
    if (c == s.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (isSubsequence(a, b) == 0)
        cout << "Yes it is a subsequence\n";
    else
        cout << "Yes it is not a subsequence\n";
}