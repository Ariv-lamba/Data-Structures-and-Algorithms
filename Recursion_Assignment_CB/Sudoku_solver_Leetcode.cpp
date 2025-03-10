class Solution {
public:

    bool issafe( vector<vector<char>>&board, int row, int col, char val){
        for(int i =0; i<9; i++){
            if(board[row][i] == val || board[i][col] == val)return false; 
        }

        // now going to check in 3*3 matrix

        for(int i =0; i<9; i++){
            int x = 3*(row/3)+i/3;
            int y = 3*(col/3)+i%3;
           if( board[x][y] == val ) return false;
        }

        return true;
    }

    bool solve(vector<vector<char>>&board){
        for(int row=0; row<9; row++){
            for(int col =0; col<9; col++){

                if(board[row][col] == '.'){

                    for(char val = '1'; val<='9'; val++){
                        if( issafe(board, row, col, val )){
                            board[row][col] = val;
                            if(solve(board)){
                                return true;
                            }else{
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                   
                }
                 
            }

        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
         solve(board);
    }
};
