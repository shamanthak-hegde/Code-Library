#include <stdio.h>
int reverse(int num)
{
    int n = num;
    int sum = 0;
    while (num != 0)
    {
        sum = (sum * 10) + (num % 10);
        num /= 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int x = reverse(n);
    printf("%d", x);
}