/*
 * @lc app=leetcode id=93 lang=cpp
 *
 * [93] Restore IP Addresses
 */

// @lc code=start
class Solution {
public:
    vector<string>ans;
    string temp;
    bool isValid(string s, int start, int end)
    {
        string temp = s.substr(start, end-start+1);
        int ip = stoll(temp);
        
        if(s[start] == '0' && start != end) return false;

        
        else if(ip >= 0 && ip <= 255) return true;
        
        return false;
    }
    void helper(string s,int start,int part)
    {
        // base case
        if(s.size()==start and part==4)
        {
            cout<<temp<<" ";
        ans.push_back(temp);    return;
        }
        
        // recursivecase
        for(int i = start;i<s.size();i++)
        {
            if(part<4 and i-start<3 and isValid(s,start,i))//part must be less than 4, each part must have string with lengths <=3, it must be valid (0-255)
            {temp.append(s.substr(start,i-start+1));
            part++;
            if(part<4)temp.push_back('.');
            helper(s,i+1,part);
            // if agge jaake result nahi mila then backtrack by removing . first then string
            if(part<4) temp.pop_back();
            part--;
            for(int j=0;j<i-start+1;j++)
            temp.pop_back();}
        }
    }
    vector<string> restoreIpAddresses(string s) {
        helper(s,0,0);
        return ans;
    }
};
// @lc code=end

