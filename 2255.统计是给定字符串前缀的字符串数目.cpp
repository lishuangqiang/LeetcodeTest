class Solution
{
public:
  int countPrefixes(vector<string> &words, string s)
  {
    int ret = 0;
    for (const string &word : words)
    {
      if (s.compare(0, word.size(), word) == 0)
      {
        ret++;
      }
    }
    return ret;
  }
};