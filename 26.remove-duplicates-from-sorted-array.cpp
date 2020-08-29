/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// [0,0,1,1,1,2,2,3,3,4]
// []

// We can use stl function unique
// which places the unique character in front of the vectot and return the index of the last placed value
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(auto x: nums)
        {
            cout<<x<<" ";
        }
        return nums.size();
    }
    
};
// @lc code=end

