/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>fans;
    void fun(vector<int> &candidates,int target,vector<int>&ans,int x)
    {
        //base case
        if(target==0)
        {
            fans.push_back(ans);
            return;
        }
        if(target<0) return;

        for(int i=x;i<candidates.size();i++)
        {
            ans.push_back(candidates[i]);
            fun(candidates,target - candidates[i],ans,i);            
            //backtrack
            ans.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
       fun(candidates,target,ans,0);
       return fans;
    }
};
// @lc code=end

