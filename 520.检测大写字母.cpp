class Solution
{
public:
  bool detectCapitalUse(string word)
  {
    int n = word.size(), cnt = 0;
    for (const auto &ch : word)
    {
      if (ch <= 'Z' && ch >= 'A')
        ++cnt;
    }
    return cnt == 0 || cnt == word.size() || cnt == 1 && word[0] <= 'Z' && word[0] >= 'A';
  }
};