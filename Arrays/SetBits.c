#include <stdio.h>
#include <stdlib.h>

int countSetBits(int x)
{
    int count = 0;
    while (x)
    {
        x = x & (x - 1);
        count++;
    }
    return count;
}
int main()
{
    int n, x;
    printf("Enter number\n");
    scanf("%d", &n);
    x = countSetBits(n);
    printf("Number of set bits: %d", x);
    return 0;
}