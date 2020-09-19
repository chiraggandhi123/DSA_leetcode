/*
 * @lc app=leetcode id=1038 lang=cpp
 *
 * [1038] Binary Search Tree to Greater Sum Tree
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
int sum = 0;
    TreeNode* fun(TreeNode *t)
    {
        if(t!=NULL)
        {
            fun(t->right);
            sum+=t->val;
            t->val = sum;
            fun(t->left);
        }
        return t;
    }
    TreeNode* bstToGst(TreeNode* root) {
    fun(root);
    return root;
    }
};
// @lc code=end

