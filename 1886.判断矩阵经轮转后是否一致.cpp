class Solution
{
public:
  bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
  {
    for (int i = 0; i < 4; ++i)
    {
      if (mat == target)
        return true;
      rotate(mat);
    }
    return false;
  }
  void rotate(vector<vector<int>> &matrix)
  {
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = m - 1;
    while (j > i)
    {
      for (int k = 0; k < n; ++k)
      {
        swap(matrix[i][k], matrix[j][k]);
      }
      --j;
      ++i;
    }
    for (i = 0; i < m; ++i)
    {
      for (j = i; j < m; ++j)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
  }
  void swap(int &a, int &b)
  {
    int tmp = a;
    a = b;
    b = tmp;
  }
};