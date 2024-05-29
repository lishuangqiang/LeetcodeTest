int minMaxDifference(int num)
{
  string s = to_string(num);

  unordered_map<char, char> hh;
  string s1 = s, s2 = s;

  // 追踪字符串非9的位置
  int j = -1;

  for (int i = 0; i < s.size(); i++)
  {
    // 如果还没有找到非9的第一个数字
    if (j == -1 && s[i] != '9')
    {
      // 将j设置为当前索引i。
      j = i;
    }

    // 如果我们已经找到了第一个非'9'字符
    if (j != -1 && s[i] == s[j])
    {
      s1[i] = '9';
    }

    // 最小值就是把第一个数字全换成0
    if (s[i] == s[0])
    {
      s2[i] = '0';
    }
  }
  return stoi(s1) - stoi(s2);
}