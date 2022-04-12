int singleNumber(int *nums, int numsSize)
{
    long long int b[100000] = {0}, c[100000] = {0}, i, num = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] >= 0)
        {
            if (b[nums[i]] == 0)
            {
                b[nums[i]]++;
                num += nums[i];
            }
            else if (b[nums[i]] == 1)
            {
                b[nums[i]]--;
                num -= nums[i];
            }
        }
        else if (nums[i] < 0)
        {
            if (c[abs(nums[i])] == 0)
            {
                c[abs(nums[i])]++;
                num += nums[i];
            }
            else if (c[abs(nums[i])] == 1)
            {
                c[abs(nums[i])]--;
                num -= nums[i];
            }
        }
    }
    return num;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = singleNumber(a, n);
    cout << "Non repeating number in the array " << x << endl;
}