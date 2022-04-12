#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        temp = a[i];
        while (a[j] > temp && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
}
void main()
{
    int a[20], n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array in sorted order:\n");
    sort(a, n);
}
