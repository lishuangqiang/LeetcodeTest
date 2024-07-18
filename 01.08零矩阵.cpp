class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {

    vector<int> cols_zeros;
    vector<int> rows_zeros;

    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = 0; j < matrix[0].size(); j++)
      {
        if (matrix[i][j] == 0)
        {
          cols_zeros.push_back(i);
          rows_zeros.push_back(j);
        }
      }
    }

    for (int i = 0; i < cols_zeros.size(); i++)
    {
      for (int j = 0; j < matrix[0].size(); j++)
      {
        matrix[cols_zeros[i]][j] = 0;
      }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = 0; j < rows_zeros.size(); j++)
      {
        matrix[i][rows_zeros[j]] = 0;
      }
    }
  }
};