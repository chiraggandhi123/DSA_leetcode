/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        if(nums.size()==1) return nums[0];
        maxsum = max(maxsum,nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+nums[i]>nums[i])
            {
                nums[i]=nums[i-1]+nums[i];
                maxsum = max(maxsum,nums[i]);
            }
            else
            
            {
                maxsum = max(maxsum,nums[i]);
            }
            
        }
        return maxsum;
    }
};
// @lc code=end

