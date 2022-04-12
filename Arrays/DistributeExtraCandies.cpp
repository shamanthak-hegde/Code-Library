vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{

    vector<bool> ans;
    int max = *max_element(candies.begin(), candies.end());

    for (int i = 0; i < candies.size(); i++)
    {
        if (candies.at(i) + extraCandies >= max)
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }
    return ans;
}