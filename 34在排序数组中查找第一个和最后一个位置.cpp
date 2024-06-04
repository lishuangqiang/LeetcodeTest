#include <vector>
#include <algorithm>

class Solution
{
public:
  std::vector<int> searchRange(std::vector<int> &nums, int target)
  {
    bool found = std::binary_search(nums.begin(), nums.end(), target);
    std::vector<int> result(2, -1);

    if (!found)
    {
      return result;
    }

    int first = std::distance(nums.begin(), std::find(nums.begin(), nums.end(), target));
    result[0] = first;

    int last = first;
    while (last < nums.size() && nums[last] == target)
    {
      ++last;
    }
    result[1] = last - 1;

    return result;
  }
};