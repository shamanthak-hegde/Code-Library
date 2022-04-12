#include <stdio.h>
int checkDigit(int num)
{
    int i = 0;
    while (num != 0)
    {
        i++;
        num /= 10;
    }
    return i;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int x = checkDigit(n);
    printf("Number of digits in %d is %d\n", n, x);
}