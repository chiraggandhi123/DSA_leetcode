/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
// Same as three sum we use 2 outer loops instead one
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if(n < 4) return result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-3; i++) {
            if(i == 0 || nums[i] != nums[i-1]){
                for(int j = i+1; j < n-2; j++) {
                    if(j == i+1 || nums[j] != nums[j-1]) {
                        int k = j+1, l = n-1;
                        while(k < l) {
                            int sum = nums[i]+nums[j]+nums[k]+nums[l];
                            if(sum > target) l--;
                            else if(sum < target) k++;
                            else {
                                result.push_back({nums[i], nums[j], nums[k], nums[l]});
                                while(k < l && nums[k] == nums[k+1]) k++;
                                while(k < l && nums[l] == nums[l-1]) l--;
                                k++;
                                l--;
                            }
                        }
                    }
                }  
            }
        }
        return result;
    }
};
// @lc code=end

