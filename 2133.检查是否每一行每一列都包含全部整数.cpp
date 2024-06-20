class Solution
{
public:
  bool checkValid(vector<vector<int>> &matrix)
  {
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i)
    {

      std::unordered_set<int> rowSet;
      for (size_t j = 0; j < n; ++j)
      {
        if (rowSet.find(matrix[i][j]) != rowSet.end())
        {
          return false;
        }
        rowSet.insert(matrix[i][j]);
      }

      std::unordered_set<int> colSet;
      for (size_t j = 0; j < n; ++j)
      {
        if (colSet.find(matrix[j][i]) != colSet.end())
        {
          return false;
        }
        colSet.insert(matrix[j][i]);
      }
    }
    return true;
  }
};