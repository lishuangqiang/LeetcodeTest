vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
{
    vector<int> result;
    multiset<int> temp1, temp2, temp3; // 使用multiset来保留重复元素

    // 将vector转换为multiset
    copy(nums1.begin(), nums1.end(), inserter(temp1, temp1.end()));
    copy(nums2.begin(), nums2.end(), inserter(temp2, temp2.end()));
    copy(nums3.begin(), nums3.end(), inserter(temp3, temp3.end()));

    // 求交集
    set_intersection(temp1.begin(), temp1.end(), temp2.begin(), temp2.end(), inserter(result, result.begin()));
    set_intersection(temp1.begin(), temp1.end(), temp3.begin(), temp3.end(), inserter(result, result.begin()));
    set_intersection(temp3.begin(), temp3.end(), temp2.begin(), temp2.end(), inserter(result, result.begin()));

    // 排序并去重
    sort(result.begin(), result.end());
    auto last = unique(result.begin(), result.end());
    result.erase(last, result.end());

    return result;
}