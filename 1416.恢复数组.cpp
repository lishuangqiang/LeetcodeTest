class Solution
{
#define MOD 1000000007
public:
  int numberOfArrays(string s, int k)
  {
    int n = s.size();
    int _dp[n + 1];
    memset(_dp, 0, sizeof(_dp));
    auto dp = _dp + 1;
    dp[-1] = 1;
    for (int i = 0; i < n; i++)
      if (s[i] != '0')
      {
        long long cur = 0;
        for (int j = i; j < n; j++)
        {
          cur = cur * 10 + (s[j] - '0');
          if (cur > k)
            break;
          dp[j] = (dp[j] + dp[i - 1]) % MOD;
        }
      }
    return dp[n - 1];
  }
};