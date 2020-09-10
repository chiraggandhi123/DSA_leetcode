/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string a)
    {   
        if(a.size()==0) return false;
        int s = 0;
        int e = a.size()-1;
        while(s<e)
        {
            if(a[s]!=a[e])
                return false;
            s++;e--;
        }
        return true;
    }
    vector<vector<string>>ans;
    void helper(string s,int pos,vector<string>v)
    {   
    // we will create partition s = "RADAR"
    // All possible partitions will be "R ADAR", "RA DAR","RAD AR","RADA R","RADAR"
    // We will push the left partition in v if itis a palindrome and call helper for right partions
    // If the right string is empty that means we have made all the partitons
    if(s.size()==0)
    {
        ans.push_back(v);return;
    }
    
    for(int i=pos;i<s.size();i++)
    {
        string left = s.substr(pos,i+1);
        if(isPalindrome(left)) v.push_back(left);
        helper(s.substr(i+1),i+1,v);
        // backtrack
        v.pop_back();
    }

    }
    vector<vector<string>> partition(string s) {
       vector<string>v;
       helper(s,0,v);
       return ans;
    }
};
// @lc code=end

