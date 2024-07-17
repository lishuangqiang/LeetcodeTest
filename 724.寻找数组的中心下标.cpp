class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int sum = 0;
    for (int a : nums)
    {
      sum += a;
    }
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {

      int temp = (count * 2) + nums[i];
      if (temp == sum)
      {
        return i;
      }
      else
      {
        count += nums[i];
      }
    }
    return -1;
  }
};