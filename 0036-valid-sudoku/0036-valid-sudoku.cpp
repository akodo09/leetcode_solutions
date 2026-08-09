class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(isdigit(board[i][j])){
                    for(int k=0;k<board.size();k++){
                        if(board[k][j]==board[i][j] && i!=k) return false;
                    }
                    for(int k=0;k<board[0].size();k++){
                        if(board[i][k]==board[i][j] && j!=k) return false;
                    }
                    int row=(i/3)*3;
                    int col=(j/3)*3;
                    for(int r=row;r<row+3;r++){
                        for(int c=col;c<col+3;c++){
                            if(board[r][c]==board[i][j] && (r!=i||c!=j))return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};