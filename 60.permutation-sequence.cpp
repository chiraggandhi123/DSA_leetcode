/*
 * @lc app=leetcode id=60 lang=cpp
 *
 * [60] Permutation Sequence
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        string s;

        for(int i=0;i<n;i++)
        {
            s.push_back(i+1+'0');
        }
        // cout<<s;
        for(int i=0;i<k-1;i++)
        {
            // cout<<s<<endl;
            next_permutation(s.begin(),s.end());
        }
        return s;

    }
};
// @lc code=end

