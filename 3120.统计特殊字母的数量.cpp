class Solution
{
public:
  int numberOfSpecialChars(string word)
  {
    int low[26] = {0}, high[26] = {0};

    for (char &w : word)
    {
      if (islower(w))
      {
        low[w - 'a']++;
      }
      else
      {
        high[w - 'A']++;
      }
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
      if (low[i] && high[i])
      {
        cnt++;
      }
    }

    return cnt;
  }
};