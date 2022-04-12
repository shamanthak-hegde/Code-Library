#include <bits/stdc++.h>
using namespace std;

int heightChecker(vector<int> &heights)
{
    vector<int> v(heights);
    int count = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < heights.size(); i++)
    {
        if (v.at(i) != heights.at(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    cout << heightChecker(v);
}