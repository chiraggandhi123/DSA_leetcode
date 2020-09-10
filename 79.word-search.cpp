class Solution {
public:
bool isPossible(vector<vector<char>> &board,int i,int j)
{
    // check if its possible to go to i and j coordinates
    if(i<board.size() and i>=0 and j>=0 and j<board[0].size())
        return true;
    return false;
}
    bool helper(vector<vector<char>>& board,string word,int pos, int i, int j)
    {
        // base case
        // 1. if last word matches 

        if(board[i][j]!=word[pos])
        {
            return false;
        }

        if(pos==word.length()-1)
            return true;
        board[i][j]='#';
        // Now we will try to move in every four possible directions and ask helper
        if (isPossible(board,i+1,j))
            {
                if(helper(board,word,pos+1,i+1,j)) return true;
            }
        if (isPossible(board,i-1,j))
            {
                if(helper(board,word,pos+1,i-1,j)) return true;
            }
        if (isPossible(board,i,j+1))
            {
                if(helper(board,word,pos+1,i,j+1)) return true;
            }
        if (isPossible(board,i,j-1))
            {
                if(helper(board,word,pos+1,i,j-1)) return true;
            }        
            board[i][j]=word[pos];
            return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        // Procedure -> we will go to every element in the board and check in all four directions top,bottom,left and right whether we are able to find word or not
        // 1. Iterate through all values in board
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j])
                if(helper(board,word,0,i,j)) return true;
            }
        }
        return false;
    }
};