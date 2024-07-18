class Solution
{
public:
  vector<int> findDiagonalOrder(vector<vector<int>> &mat)
  {
    int m = mat.size(), n = mat[0].size();

    vector<int> ans(m * n);
    int id = 0, i, j;

    for (int k = 0; k < m + n - 1; ++k)
    {
      if (k % 2 == 0)
      { // 从左往右
        for (j = max(k - m + 1, 0); j <= min(k, n - 1); ++j)
        {
          ans[id++] = mat[k - j][j];
        }
      }
      else
      { // 从右往右
        for (i = max(0, k - n + 1); i <= min(k, m - 1); ++i)
        {
          ans[id++] = mat[i][k - i];
        }
      }
    }
    return ans;
  }
};