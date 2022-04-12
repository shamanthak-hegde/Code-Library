#include <bits/stdc++.h>
using namespace std;

int numBoxes(int A[], int n, int K)
{
    sort(A, A + n);

    int i = 0, j = n - 1;
    int ans = 0;
    while (i <= j)
    {
        ans++;
        if (A[i] + A[j] <= K)
            i++;
        j--;
    }

    return ans;
}

int main()
{
    int A[] = {3, 2, 2, 1}, K = 3;
    int n = sizeof(A) / sizeof(A[0]);
    cout << numBoxes(A, n, K);
    return 0;
}
