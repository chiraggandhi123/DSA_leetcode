/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool visited_row[10][10];
    bool visited_col[10][10];
    bool visited_mat[10][10];
    bool isValidSudoku(vector<vector<char>>& board) {
        // check every row
        for(int i=0;i<9;i++)
        {   
            bool visited[10]={0};
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                // cout<<board[i][j] - '0'<<" ";
                int val = board[i][j] - '0';
                if(visited[val])
                {
                    return false;
                }
                else
                {
                    visited[val] = 1;
                }
                
            }
            // cout<<endl;
        }
        // check every column
        for(int i=0;i<9;i++)
        {   
            bool visited[10]={0};
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.') continue;
                // cout<<board[i][j] - '0'<<" ";
                int val = board[j][i] - '0';
                if(visited[val])
                {
                    return false;
                }
                else
                {
                    visited[val] = 1;
                }
                
            }
            // cout<<endl;
        }
        // check every sub matrix
        for(int i=0;i<3;i++)//0,1,2
        {   
            for(int j=0;j<3;j++)//0,1,2
            {
                bool visited[10] = {0};
                for(int k=i*3;k<i*3+3;k++)//i=0,j=1
                {
                    for(int l = j*3;l<j*3+3;l++)
                    {
                        if(board[k][l]=='.')continue;
                        int val = board[k][l] - '0';
                        if(visited[val])
                        {
                                                    // cout<<"("<<k<<" , "<<l<<")";
                        return false;
                        }
                        
                        else
                        {
                            visited[val]=1;
                        }
                        
                        
                    }
                    // cout<<endl;
                }
            }
        }
        return true;
    }
};
// @lc code=end

