/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    void DFS(TreeNode*t,string &s)
    {
        if(t==NULL) {
            return;
        }
        s.append(to_string(t->val));
        if(t->left==NULL and t->right==NULL)
        {
        int sum = 0;
        // cout<<s<<" ";
        for(int i=0;i<=s.length()-1;i++)
        {
            cout<<(s[i]-'0')*pow(2,s.length()-i-1)<<" ";
            sum+=(s[i]-'0')*pow(2,s.length()-i-1);
        }
        // cout<<sum<<endl;
        ans+=sum;

        }
        
        DFS(t->left,s);
        DFS(t->right,s);
        s.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        string s;
        DFS(root,s);
        return ans;
    }
};
// @lc code=end

