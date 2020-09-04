/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
vector<string>ans;

    void fun(string a,int i,int n,int o,int c)
    {
        //base case
        if(i==2*n)
        {
            cout<<a<<endl;
            ans.push_back(a);
            return;
        }

        if(o<n) fun(a+'(',i+1,n,o+1,c);//(((
        if(c<o) fun(a+')',i+1,n,o,c+1);
    }
    vector<string> generateParenthesis(int n) {

        string a = "";
        fun(a,0,n,0,0);
        return ans;
    }
};
// @lc code=end

