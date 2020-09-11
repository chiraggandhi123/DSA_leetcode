
// @lc code=start
class Solution {
public:
    int ans;
    
    
    void helper(int N,vector<int>&v,vector<bool>&visited)
    {
        if(v.size()==N){
            ans++;
            return;
        } 
        int pos = v.size()+1;//position the number to be inserted
        for(int i=1;i<=N;i++)
        {
             if((!(i%pos) or !(pos%i))and !visited[i])
             {
                 visited[i]=1;
                 v.push_back(i);
                 helper(N,v,visited);
                 v.pop_back();
                 visited[i]=0;
             }
                
            
            

        }
    }
    int countArrangement(int N) {
        vector<int>v;
        vector<bool>visited(N+1);
        // if(N==7) return 41;
        helper(N,v,visited);
        return ans;
    }
};
// @lc code=end

