class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // int n = board.size();

        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < n; j++)
        //     {
        //         if(board[i][j] == '.')
        //             continue;

        //         for(int k = 0; k < n; k++)
        //         {
        //             if(k != j && board[i][k] == board[i][j])
        //                 return false;

        //             if(k != i && board[k][j] == board[i][j])
        //                 return false;
        //         }

        //         for(int k = ((int)i/3)*3; k < (((int)i/3)*3) + 3; k++)
        //         {
        //             for(int l = ((int)j/3)*3; l < (((int)j/3)*3) + 3; l++)   
        //             {
        //                 if ((k != i || l != j) && board[k][l] == board[i][j])   
        //                     return false;
        //             }
        //         }
        //     }
        // }

        // return true;


        int n = board.size();

        vector<unordered_set<char>> rows(n);
        vector<unordered_set<char>> cols(n);
        map<pair<int, int>, unordered_set<char>> squares;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(board[i][j] == '.') continue;

                if(rows[i].find(board[i][j]) != rows[i].end()) return false;
                if(cols[j].find(board[i][j]) != cols[j].end()) return false;
                if(squares[{((int)i/3),((int)j/3)}].find(board[i][j]) != squares[{((int)i/3),((int)j/3)}].end()) return false;

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                squares[{((int)i/3),((int)j/3)}].insert(board[i][j]);
            }
        }

        return true;
    }
};
