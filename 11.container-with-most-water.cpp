/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxArea = 0;
        int i=0;
        int j=h.size()-1;
        while(i<j)
        {
        if(h[i]>h[j])
        {
            maxArea = max(maxArea,h[j]*(j-i));
            j--;
        }
        else
        {
            maxArea = max(maxArea,h[i]*(j-i));
            i++;
        }
        }
        return maxArea;
    }
};
// @lc code=end

