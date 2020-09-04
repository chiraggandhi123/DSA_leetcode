/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    int factorial(int n) 
        { 
            // single line to find factorial 
            return (n==1 || n==0) ? 1: n * factorial(n - 1);  
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        // int n = nums.size();
        if(nums.size()==1)
        {
            ans.push_back(nums);
            return ans;
        }
        int n = factorial(nums.size());

        for(int i=0;i<n;i++)
        {
            // cout<<i<<" ";
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());

        }
        return ans;
    }
};
// @lc code=end

