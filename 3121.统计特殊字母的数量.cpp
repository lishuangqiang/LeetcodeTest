class Solution
{
public:
  int numberOfSpecialChars(string word)
  {
    int count{};
    unordered_map<char, int> a;
    unordered_map<char, int> b;

    for (int i{}; i < word.size(); ++i)
    {
      const char ch = word[i];
      if (islower(ch))
        a[ch] = i;
      else if (!b.count(ch))
        b[ch] = i;
    }
    for (const auto &[c, i] : b)
    {
      if (a.count(tolower(c)) && a[tolower(c)] < i)
        count++;
    }
    return count;
  }
};