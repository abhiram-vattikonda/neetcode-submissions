class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(board[i][j] == '.')
                    continue;

                for(int k = 0; k < n; k++)
                {
                    if(k != j && board[i][k] == board[i][j])
                        return false;

                    if(k != i && board[k][j] == board[i][j])
                        return false;
                }

                for(int k = ((int)i/3)*3; k < (((int)i/3)*3) + 3; k++)
                {
                    for(int l = ((int)j/3)*3; l < (((int)j/3)*3) + 3; l++)   
                    {
                        if ((k != i || l != j) && board[k][l] == board[i][j])   
                            return false;
                    }
                }
            }
        }

        return true;
    }
};
