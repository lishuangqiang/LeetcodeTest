class Solution
{
public:
    int game(vector<int> &guess, vector<int> &answer)
    {
        vector<int> result;
        set_intersection(guess.begin(), guess.end(), answer.begin(), answer.end(), inserter(result, result.begin()));

        return result.size();
    }
};