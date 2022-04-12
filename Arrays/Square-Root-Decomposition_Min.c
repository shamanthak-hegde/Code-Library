#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAXN 1000000
#define SQRSIZE 10000
int arr[MAXN];
int block[SQRSIZE];
int blk_sz;

int query(int l, int r)
{
    int min = 1000000;
    while (l < r && l % blk_sz != 0 && l != 0)
    {
        if (min > arr[l])
            min = arr[l];
        l++;
    }
    while (l + blk_sz <= r)
    {
        if (min > block[l / blk_sz])
            min = block[l / blk_sz];
        l += blk_sz;
    }
    while (l <= r)
    {
        if (min > arr[l])
            min = arr[l];
        l++;
    }
    return min;
}
void preprocess(int input[], int n)
{
    int blk_idx = -1;
    blk_sz = sqrt(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = input[i];
        if (i % blk_sz == 0)
        {
            blk_idx++;
            block[blk_idx] = arr[i];
        }
        if (block[blk_idx] > arr[i])
            block[blk_idx] = arr[i];
    }
}
int main()
{
    int n, q, r1, r2;
    int b[1000000];
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    preprocess(b, n);
    for (int i = 0; i < q; i++)
    {
        scanf("%d%d", &r1, &r2);
        printf("%d\n", query(r1, r2));
    }
    return 0;
}