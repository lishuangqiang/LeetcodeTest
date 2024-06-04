class Solution
{
public:
  int arrangeCoins(int n)
  {
    int i;
    long sum = 0;

    if (n == 1)
    {
      return 1;
    }

    for (i = 1; i < n; i++)
    {
      sum += i;
      if (sum > n)
      {
        break;
      }
    }
    return i - 1;
  }
};