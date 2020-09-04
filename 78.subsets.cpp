/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>fans;
    void helper(vector<int>&nums,int i)
    {
        
            int c = 0;
            vector<int>v;
            while(i)
            {
                int x = i&1;
                
                if(x)
                {
                    v.push_back(nums[c]);
                }
                c++;
                i=i>>1;
            }
            fans.push_back(v);
            
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        for(int i=0;i<(1<<nums.size());i++)
        {
         helper(nums,i);   
        }
        return fans;
    }
};
// @lc code=end

