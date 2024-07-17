class Solution
{
public:
  bool canThreePartsEqualSum(vector<int> &arr)
  {
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int i = 0, f = 0, divide = 0;
    if (sum % 3)
      return false;
    else
      sum /= 3;
    while (i < arr.size() && f < 3)
    {
      divide += arr[i];
      i++;
      if (divide == sum)
      {
        divide = 0;
        f++;
      }
    }
    return (f == 3);
  }
};