class Solution
{
public:
  int waysToSplitArray(vector<int> &nums)
  {

    long long sum = std::accumulate(nums.begin(), nums.end(), 0LL);

    long long tmp = 0;

    int ans = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {

      tmp += nums[i];

      if (tmp >= sum - tmp)
      {
        ans++;
      }
    }
    return ans;
  }
};