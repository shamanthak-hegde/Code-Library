/* Program to get maximum number of edges which
can be removed such that each connected component
of this tree will have an even number of vertices */
#include <bits/stdc++.h>
using namespace std;

int dfs(vector<int> g[], int u, bool visit[], int &res)
{
    visit[u] = true;
    int currComponentNode = 0;

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];
        if (!visit[v])
        {
            int subtreeNodeCount = dfs(g, v, visit, res);

            if (subtreeNodeCount % 2 == 0)
                res++;

            else
                currComponentNode += subtreeNodeCount;
        }
    }

    return (currComponentNode + 1);
}

int maxEdgeRemovalToMakeForestEven(vector<int> g[], int N)
{
    bool visit[N + 1];
    for (int i = 0; i <= N; i++)
        visit[i] = false;

    int res = 0;

    dfs(g, 0, visit, res);

    return res;
}

void addEdge(vector<int> g[], int u, int v)
{
    g[u].push_back(v);
    g[v].push_back(u);
}

int main()
{
    int edges[][2] = {{0, 2}, {0, 1}, {0, 4}, {2, 3}, {4, 5}, {5, 6}, {5, 7}};
    int N = sizeof(edges) / sizeof(edges[0]);
    vector<int> g[N + 1];
    for (int i = 0; i < N; i++)
        addEdge(g, edges[i][0], edges[i][1]);

    cout << maxEdgeRemovalToMakeForestEven(g, N);
    return 0;
}
