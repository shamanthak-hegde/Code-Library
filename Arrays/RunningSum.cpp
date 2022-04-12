vector<int> runningSum(vector<int> &nums)
{

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums.at(i);
        nums.at(i) = sum;
    }
    return nums;
}
