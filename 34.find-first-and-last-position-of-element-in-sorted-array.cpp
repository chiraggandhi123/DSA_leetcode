class Solution {
public:
    std::vector<int> searchRange(const std::vector<int>& nums, int target) {
        const auto it = std::lower_bound(nums.begin(), nums.end(), target);
        std::vector ans{ -1, -1 };
        if(it!=nums.end() and *it==target)
        {
            ans[0] = it - nums.begin();
            ans[1] = upper_bound(it,nums.end(),target)-nums.begin()-1;

        }
        return ans;
    }
};