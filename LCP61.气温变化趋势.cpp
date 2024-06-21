class Solution
{
public:
  int temperatureTrend(vector<int> &temperatureA, vector<int> &temperatureB)
  {

    vector<int> atA;
    vector<int> atB;
    for (int i = 0; i < temperatureA.size() - 1; i++)
    {
      if (temperatureA[i] > temperatureA[i + 1])
      {
        atA.push_back(-1);
      }
      else if (temperatureA[i] == temperatureA[i + 1])
      {
        atA.push_back(0);
      }
      else if (temperatureA[i] < temperatureA[i + 1])
      {
        atA.push_back(1);
      }
    }

    for (int i = 0; i < temperatureB.size() - 1; i++)
    {
      if (temperatureB[i] > temperatureB[i + 1])
      {
        atB.push_back(-1);
      }
      else if (temperatureB[i] == temperatureB[i + 1])
      {
        atB.push_back(0);
      }
      else if (temperatureB[i] < temperatureB[i + 1])
      {
        atB.push_back(1);
      }
    }

    int count = 0;
    int temp = 0;
    for (int i = 0; i < atA.size(); i++)
    {
      if (atA[i] == atB[i])
      {
        temp++;
      }
      else
      {
        if (temp > count)
        {
          count = temp;
        }
        temp = 0;
      }
    }
    if (temp > count)
    {
      count = temp;
    }

    return count;
  }
};