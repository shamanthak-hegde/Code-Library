vector<int> assign(int n, int cost[][3])
{
    int size = pow(2, n), x;
    int dp[size], mask;
    for (int c = 0; c < size; c++)
    {
        dp[c] = 99999;
    }
    dp[0] = 0;
    for (int c = 0; c < pow(2, n); c++)
    {
        mask = c;
        x = countBitSet(mask);
        for (int j = 0; j < n; j++)
        {
            if (true)
            {
                dp[mask | (1 << j)] = min(dp[mask | (1 << j)], dp[mask] + cost[x][j]);
            }
        }
    }

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        v.push_back(dp[i]);
    }

    return v;
}