/*
 * @lc app=leetcode id=216 lang=cpp
 *
 * [216] Combination Sum III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    bool isSum(vector<int>v,int n)
    {
        int sum = 0;
        for(auto x:v)
        {
            sum+=x;
        }
        if(sum==n) return true;
        return false;
    }
    void helper(vector<int>&v,int k,int n,int pos)
    {
        //base case
        if(k==0 and isSum(v,n)) 
        {
            ans.push_back(v);
            return;
        }
        // recursive case
        for(int i=pos;i<=9;i++)
        {
            v.push_back(i);
            helper(v,k-1,n,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        helper(v,k,n,1);
        return ans;
    }
};
// @lc code=end

