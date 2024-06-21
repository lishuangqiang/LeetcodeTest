class Solution
{
public:
  bool isPrefixString(string s, vector<string> &words)
  {
    string cp = "";
    for (string add : words)
    {
      cp = cp + add;
      if (s == cp)
      {
        return true;
      }
    }
    return false;
  }
};