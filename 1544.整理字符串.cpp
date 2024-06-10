class Solution
{
public:
  string makeGood(string s)
  {
    string res;
    for (int i = 0; i < s.size(); i++)
    {
      if (res.empty() || abs(res.back() - s[i]) != 32)
      {
        res.push_back(s[i]);
      }
      else
      {
        res.pop_back();
      }
    }
    return res;
  }
};