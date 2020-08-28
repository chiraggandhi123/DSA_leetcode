/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
// #include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool isPresent[100005]={0};
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(target==nums[i]+nums[j])
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
        
    }
};
// @lc code=end

