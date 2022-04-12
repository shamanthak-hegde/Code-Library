#include <stdio.h>
int sumDigit(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num /= 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int x = sumDigit(n);
    printf("Sum of digits in %d is %d\n", n, x);
}