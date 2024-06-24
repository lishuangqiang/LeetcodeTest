class Solution
{
public:
  vector<int> nextGreaterElements(vector<int> &nums)
  {
    vector<int> com;
    vector<int> ret(nums.size(), -1);
    for (int i = 0; i < nums.size(); i++)
    {
      com.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
      com.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {

      for (int j = i + 1; j < nums.size() + i + 1; j++)
      {
        if (nums[i] < com[j])
        {
          ret[i] = com[j];
          break;
        }
      }
    }
    return ret;
  }
};