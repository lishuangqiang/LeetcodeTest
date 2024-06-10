class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {
    int i = 0;
    while (i < nums.size())
    {
      if (nums[nums[i] - 1] != nums[i])
      {
        swap(nums[i], nums[nums[i] - 1]);
      }
      else
      {
        i++;
      }
    }
    vector<int> ret;
    for (int i = 0; i < nums.size(); i++)
    {
      if (i + 1 != nums[i])
      {
        ret.push_back(i + 1);
      }
    }
    return ret;
  }
};