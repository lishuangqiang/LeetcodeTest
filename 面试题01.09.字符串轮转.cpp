class Solution
{
public:
  bool isFlipedString(string s1, string s2)
  {
    if (s1.size() != s2.size())
    {
      return false;
    }
    string result = s2 + s2;
    size_t found = result.find(s1);
    if (found != string::npos)
    {
      return true;
    }
    return false;
  }
};