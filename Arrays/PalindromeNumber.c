#include <stdio.h>
int check(int num)
{
    int n = num;
    int sum = 0;
    while (num != 0)
    {
        sum = (sum * 10) + (num % 10);
        num /= 10;
    }
    if (sum == n)
        return 0;
    else
        return 1;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int x = check(n);
    if (x == 0)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}