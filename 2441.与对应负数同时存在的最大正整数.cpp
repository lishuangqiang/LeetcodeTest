class Solution
{
public:
  int findMaxK(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());

    for (auto num : nums)
    {
      if (num > 0)
      {
        break;
      }
      if (binary_search(nums.begin(), nums.end(), abs(num)))
      {
        return abs(num);
      }
    }
    return -1;
  }
};