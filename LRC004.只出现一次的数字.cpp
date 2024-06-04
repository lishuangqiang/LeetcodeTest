class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {

    auto it = std::find_if(nums.begin(), nums.end(), [&nums](int x)
                           { return std::count(nums.begin(), nums.end(), x) == 1; });

    return *it;
  }
};