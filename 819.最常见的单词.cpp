class Solution
{
public:
  string mostCommonWord(string paragraph, vector<string> &banned)
  {
    map<string, int> wordsFrequency;
    string tmp;

    for (int i = 0; i <= paragraph.length(); i++)
    {
      char c = i == paragraph.length() ? ' ' : paragraph[i];
      if (isalpha(c))
      {
        tmp += tolower(c);
      }
      else
      {
        if (!tmp.empty())
        {
          wordsFrequency[tmp]++;
          tmp = "";
        }
      }
    }

    int maxCount = 0;
    string result;
    for (const auto &kv : wordsFrequency)
    {
      if (find(banned.begin(), banned.end(), kv.first) == banned.end() && kv.second > maxCount)
      {
        maxCount = kv.second;
        result = kv.first;
      }
    }
    return result;
  }
};