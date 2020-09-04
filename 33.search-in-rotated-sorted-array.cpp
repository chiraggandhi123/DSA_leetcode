/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto x = find(nums.begin(),nums.end(),target);
        if(x==nums.end())
        return -1;
        return x - nums.begin();
    }
};
// @lc code=end

