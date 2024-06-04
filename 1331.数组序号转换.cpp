class Solution
{
public:
  vector<int> arrayRankTransform(vector<int> &arr)
  {
    std::vector<int> ranks(arr.size());
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());

    int rank = 1;
    for (int i = 0; i < sortedArr.size(); ++i)
    {

      if (i == 0 || sortedArr[i] != sortedArr[i - 1])
      {
        ranks[i] = rank;
      }
      else
      {
        ranks[i] = ranks[i - 1];
      }

      if (i == sortedArr.size() - 1 || sortedArr[i] != sortedArr[i + 1])
      {
        rank++;
      }
    }

    for (int i = 0; i < arr.size(); ++i)
    {
      arr[i] = ranks[std::lower_bound(sortedArr.begin(), sortedArr.end(), arr[i]) - sortedArr.begin()];
    }
    return arr;
  }
};