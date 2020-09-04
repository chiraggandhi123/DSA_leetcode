/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
 int factorial(int n) 
        { 
            // single line to find factorial 
            return (n==1 || n==0) ? 1: n * factorial(n - 1);  
        }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     set<vector<int>>s;   
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
            s.insert(nums);
            // ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());

        }
        for(auto x:s)
        {
            ans.push_back(x);
        }
        cout<<s.size();
        return ans;
    }
};
// @lc code=end

