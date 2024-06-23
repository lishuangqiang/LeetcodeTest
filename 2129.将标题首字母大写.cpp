class Solution
{
public:
  string capitalizeTitle(string title)
  {
    stringstream ss(title);
    return accumulate(istream_iterator<string>(ss), {}, ""s, [](auto &&a, auto &&b)
                      {
            if (a.size()) a += " ";
            ranges::transform(b, back_inserter(a), ::tolower);
            if (b.size() > 2) a[a.size() - b.size()] = toupper(b[0]);
            return a; });
  }
};