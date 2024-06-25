class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    map<int, int> map;
    for (int i : nums)
    {
      map[i]++;
    }
    for (auto i : map)
    {
      if (i.second > 1)
      {
        return i.first;
      }
    }
    return 0;
  }
};