#include <stdio.h>
#include <stdbool.h>
#define SINGLE 0
int main()
{
    int t, n;
    scanf("%d", &t); // number of test cases
    while (t--)
    {
        scanf("%d", &n);
        int mList[n + 1][n + 1]; // men's preference list
        int wList[n + 1][n + 1]; // women's preference list
        int mcm[n + 1];          // current match of men
        int wcm[n + 1];          // current match of men
        int mnp[n + 1];          // each man will propose this indexed woman in his preference list

        // taking inputs...
        for (int i = 1; i <= n; i++)
        {                    // for each woman
            wcm[i] = SINGLE; // set her to be single
            for (int j = 0; j <= n; j++)
            {
                scanf("%d", &wList[i][j]);
            }
        }

        for (int i = 1; i <= n; i++)
        {                    // for each man
            mcm[i] = SINGLE; // set him to be single
            mnp[i] = 1;      // each man will start by proposing 1st woman in his list
            for (int j = 0; j <= n; j++)
            {
                scanf("%d", &mList[i][j]);
            }
        }

        // algorithm...
        bool fma = true; // at begining we have free man available
        int m = 1;       // taking the first man as free for first iteration
        while (fma)
        {
            fma = false;
            int w = mList[m][mnp[m]++]; // the woman man proposes
            if (wcm[w] == SINGLE)
            {
                // w is currently free, engage (m and w)...
                wcm[w] = m;
                mcm[m] = w;
            }
            else
            {
                // w is engaged...
                bool BetterProposal = false; // check if it's a better proposal
                // check her preference list
                for (int y = 1; y <= n; y++)
                {
                    if (wList[w][y] == wcm[w])
                    {
                        BetterProposal = false;
                        break;
                    }
                    if (wList[w][y] == m)
                    {
                        BetterProposal = true;
                        break;
                    }
                }
                if (BetterProposal)
                {
                    // if a better proposal, then engage (m and w), and set w's previous partner as free...
                    mcm[wcm[w]] = SINGLE;
                    wcm[w] = m;
                    mcm[m] = w;
                }
            }

            // finding a new free man...
            for (int x = 1; x <= n; x++)
            {
                if (mcm[x] == SINGLE)
                {
                    m = x;
                    fma = true;
                    break;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            printf("%d %d\n", i, mcm[i]);
        }
    }

    return 0;
}
