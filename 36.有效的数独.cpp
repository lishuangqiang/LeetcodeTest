
class Solution
{
public:
  bool isValidSudoku(const std::vector<std::vector<char>> &board)
  {
    std::unordered_set<std::string> seen;
    for (int i = 0; i < 9; i++)
    {
      for (int j = 0; j < 9; j++)
      {
        char c = board[i][j];
        if (c != '.')
        {
          std::string rowKey = std::string(1, c) + " in row " + std::to_string(i);
          std::string colKey = std::string(1, c) + " in column " + std::to_string(j);
          std::string blockKey = std::string(1, c) + " in block " + std::to_string(i / 3) + "-" + std::to_string(j / 3);
          if (!seen.insert(rowKey).second || !seen.insert(colKey).second || !seen.insert(blockKey).second)
          {
            return false;
          }
        }
      }
    }
    return true;
  }
};