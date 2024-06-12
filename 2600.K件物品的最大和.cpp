class Solution
{
public:
  int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
  {
    int ans = 0;
    if (k > numOnes)
    {
      ans += numOnes;
      k -= numOnes;
      if (k > numZeros)
      {
        k -= numZeros;
        ans -= k;
      }
    }
    else
      ans = k;
    return ans;
  }
};