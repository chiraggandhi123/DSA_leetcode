/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    vector<int> fun(int i,vector<int>&v,vector<int>& nums)
    {
        int c= 0;
        while(i>0)
            {
                if(i&1)
                {
                    v.push_back(nums[c]);

                }
                c++;
                i=i>>1;
            }
            return v;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>>fans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<(1<<nums.size());i++)
        {
            cout<<i<<" ";
            vector<int>v;
            
            
            ans.insert(fun(i,v,nums));
        }
        for(auto x:ans)
        {
            fans.push_back(x);

        }
        return fans;
    }
    
};
// @lc code=end

