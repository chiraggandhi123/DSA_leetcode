/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    map<int,string>mp={{2,"abc"},
                           {3,"def"},
                           {4,"ghi"},
                           {5,"jkl"},
                           {6,"mno"},
                           {7,"pqrs"},
                           {8,"tuv"},
                           {9,"wxyz"}};
vector<string>v;                           
void fun(string digits,string ans,int  i,int n)
{
    // base case
    if(i==n)
    {
        
        v.push_back(ans);
        cout<<ans;
        return;
    }
    int x = digits[i]-'0';//2
    // cout<<x<<" ";
    int x_size = mp[x].length();//abc
    // cout<<x_size<<endl;
    for(int j=0;j<x_size;j++)
    {

        fun(digits,ans+mp[x][j],i+1,n);
    }
}                           
    vector<string> letterCombinations(string digits) {
        
        string ans = "";
        if(!digits.length())
        {
            vector<string>u;
            return u;
        }
        fun(digits,ans,0,digits.length());
        return v;    
    }
};
// @lc code=end

