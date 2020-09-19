/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int dp[1002][1002];
        memset(dp,0,sizeof dp);
        // base cases
        // s="";
        if(s.length()==1) return s;
        int gi=0;int gj=0;
        for(int i=0;i<s.length();i++)
        {
            // for every single element is a palindrome
            dp[i][i]=1;
            // even palindromes of size 2
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                gi=i;gj=i+1;
            }

        }
        
        for(int k=2;k<s.length();k++)
        {
            for(int i=0;i<s.length()-k;i++)
            {
                int j = i+k;
                if(s[i]==s[j] and dp[i+1][j-1])
                {
                    gi=i;
                    gj=j;
                    dp[i][j]=1;
                }
            }
        }
        

    return s.substr(gi,gj-gi+1);    
    }
    
};
// @lc code=end

