class Solution {
public:

     bool issafe(vector<vector<int>>&board,  int row, int col, int n){
        // check if col no is same.
        for(int i =0; i<row; i++){
            if(board[i][col] == 1)return false;
        }

        // check for upper left diagonal
        int i =row, j = col;
        while(i>=0 && j>=0){
            if(board[i][j]== 1)return false;
            i--;
            j--;
        }

        // check for upper right diagonal

        i = row, j = col;
        while( i>=0 && j<n){
            if(board[i][j] == 1)return false;
            i--;
            j++;
        }

        return true;

     }


     void fun(vector<vector<int>>&board, int row, int n, vector<vector<string>>&ok){
        if(row == n){
            vector<string>lvl;

            for(int i =0; i<n; i++){
                string s = "";
                for(int j =0; j<n; j++){
                    if(board[i][j] == 1){
                        s+= 'Q';
                    }else{
                        s+= '.';
                    }
                }
                lvl.push_back(s);
            }
            ok.push_back(lvl);
            return;
        }

        for(int col = 0; col<n; col ++){
            if(issafe(board, row, col, n)){
                board[row][col] = 1;
                fun(board, row+1, n, ok);
                board[row][col] = 0;
            }
        }
     }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>>board(n, vector<int>(n, 0));
        vector<vector<string>>ok;
        fun(board, 0, n, ok);
        return ok;

    }
};
