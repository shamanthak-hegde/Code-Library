int subtractProductAndSum(int n)
{

    int num = n, sum = 0, mul = 1;

    while (num != 0)
    {
        sum += num % 10;
        mul *= num % 10;
        num /= 10;
    }
    return mul - sum;
}