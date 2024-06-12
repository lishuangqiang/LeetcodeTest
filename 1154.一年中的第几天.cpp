class Solution
{
public:
  int dayOfYear(std::string date)
  {
    std::istringstream dateStream(date);
    std::string year, month, day;

    std::getline(dateStream, year, '-');

    std::getline(dateStream, month, '-');

    std::getline(dateStream, day);

    int y = std::stoi(year);
    int m = std::stoi(month);
    int d = std::stoi(day);

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
    {
      daysInMonth[1] = 29; // 如果是闰年，二月为29天
    }

    int dayOfYear = d;
    for (int i = 0; i < m - 1; ++i)
    {
      dayOfYear += daysInMonth[i];
    }

    return dayOfYear;
  }
};