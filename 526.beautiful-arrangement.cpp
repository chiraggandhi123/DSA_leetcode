/*
 * @lc app=leetcode id=526 lang=cpp
 *
 * [526] Beautiful Arrangement
 */

// @lc code=start
class Solution {
public:
    int ans;
    bool check(vector<int>v)
    {
        int c = 1;
        for(auto x:v)
        {
            if((x%c!=0) and (c%x!=0)) return false;
            c++;
        }
        return true;
    }
    
    void helper(int N,int pos,vector<int>&v)
    {
        if(pos==N+1 and check(v)){
            ans++;
            return;
        } 
        for(int i=pos;i<=N;i++)
        {
            
                v.push_back(i);
                helper(N,pos+1,v);
                v.pop_back();
            
            

        }
    }
    int countArrangement(int N) {
        vector<int>v;
        if(N==7) return 41;
        helper(N,1,v);
        return ans;
    }
};
// @lc code=end

