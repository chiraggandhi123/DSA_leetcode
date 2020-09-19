/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:
    set<vector<int>>fans;
    vector<vector<int>>uans;
    void fun(vector<int> &candidates,int target,vector<int>&ans,int x)
    {
        //base case
        if(target<0) return;
        if(target==0)
        {
            fans.insert(ans);
            return;
        }
        

        for(int i=x;i<candidates.size();i++)
        {
            ans.push_back(candidates[i]);
            fun(candidates,target - candidates[i],ans,i+1);            
            //backtrack
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // sort(candidates.begin(),candidates.end());
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        // 1,1,2,5,6,7,10
        fun(candidates,target,ans,0);
        for(auto x:fans){
            uans.push_back(x);
        }
        return uans;
    }
};
// @lc code=end

