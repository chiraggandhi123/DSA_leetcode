/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>fans;
    void helper(int n,vector<int> &v,int k,int x){
        //base case - if size of vector becomes equal k push it
        if(v.size()==k)
        {
            fans.push_back(v);
            return;
        }
        for(int i=x;i<=n;i++)
        {
            v.push_back(i);
            helper(n,v,k,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        helper(n,ans,k,1);
        return fans;
    }
};
// @lc code=end

