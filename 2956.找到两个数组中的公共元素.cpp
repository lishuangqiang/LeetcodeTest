class Solution
{
public:
  vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_set<int> st1(nums1.begin(), nums1.end());
    unordered_set<int> st2(nums2.begin(), nums2.end());

    int answer1 = 0, answer2 = 0;
    for (int num : nums1)
      answer1 += st2.count(num);
    for (int num : nums2)
      answer2 += st1.count(num);
    return {answer1, answer2};
  }
};