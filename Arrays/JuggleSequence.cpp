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

void printJuggler(int n)
{
    int a = n;

    cout << a << " ";

    while (a != 1)
    {
        int b = 0;

        if (a % 2 == 0)
            b = floor(sqrt(a));

        else
            b = floor(sqrt(a) * sqrt(a) * sqrt(a));

        cout << b << " ";
        a = b;
    }
    cout << endl;
}

int32_t main()
{
    fastIO

        int n;
    cin >> n;

    printJuggler(n);

    return 0;
}