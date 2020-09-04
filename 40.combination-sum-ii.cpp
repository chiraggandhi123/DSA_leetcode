/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
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

        for(int i=x+1;i<candidates.size();i++)
        {
            ans.push_back(candidates[i]);
            fun(candidates,target - candidates[i],ans,i);            
            //backtrack
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // sort(candidates.begin(),candidates.end());
        vector<int>ans;
        fun(candidates,target,ans,0);
        return fans;
    }
};
// @lc code=end

