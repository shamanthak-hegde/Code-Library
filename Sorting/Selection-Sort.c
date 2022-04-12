#include <stdio.h>

void selection_sort(int *a, int n)
{
    int temp = 0, min;
    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int a[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    selection_sort(a, n);
    return 0;
}