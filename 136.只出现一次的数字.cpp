class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {

    if (nums.size() == 1)
    {
      return nums[0];
    }
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
      sum = sum ^ nums[i];
    }
    return sum;
  }
};