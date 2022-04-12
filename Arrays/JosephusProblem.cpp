#include <bits/stdc++.h>
using namespace std;

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define mkp make_pair
#define pi pair<int, int>
#define push push
#define all(v) v.begin(), v.end()
#define rep(i, l, r) for (int i = (int)(l); i < (int)(r); i++)
#define clr(a, x) memset(a, x, sizeof(a));
#define rr(v) for (auto &val : v)
#define print(v)             \
    for (const auto itr : v) \
    {                        \
        cout << itr << ' ';  \
    }                        \
    cout << endl;
#define init(v, x)      \
    for (auto &itr : v) \
    {                   \
        itr = x;        \
    }
#define minpq(x) x, vector<x>, greater<x>
#define ln length()
#define sz size()
#define infinity 1e18;
#define elif else if
#define mod 1e9;

vector<int> prisoners;

int findSurvivors(int n, int k, int s = 0)
{
    int i = s + 1;

    for (int x = i; x <= n; x++, i++)
    {
        s = (s + k) % i;
    }

    return s;
}

void getList(int n, int k, int s = 1)
{
    prisoners.clear();

    rep(x, 0, n)
        prisoners.pub(x);

    int index = 0;

    while (prisoners.sz > 0)
    {
        index += (k - 1);

        if (index >= prisoners.sz)
            index %= (prisoners.sz);

        cout << prisoners[static_cast<unsigned int>(index)] << ",";

        vector<int>::iterator it = prisoners.begin() + static_cast<unsigned int>(index);

        prisoners.erase(it);
    }
}

int32_t main()
{
    fastIO

        int n,
        k, s;

    cin >> n >> k >> s;

    if (s == 1)
    {
        cout << findSurvivors(n, k) << endl;
        getList(n, k);
    }
    else
    {
        rep(x, 0, s)
        {
            cout << findSurvivors(n, k) << " ";
        }

        getList(n, k, s);
    }

    cout << endl;

    return 0;
}