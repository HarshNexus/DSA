class Solution {
private:
bool issafe(int r, int c, vector<vector<char>>& board, int n,int v){
    for(int i=0;i<n;i++){
        if(board[r][i]==(v + '0')){
            return false;
        }

        if(board[i][c]==(v + '0')){
            return false;
        }

        if(board[3*(r/3)+i/3][3*(c/3)+i%3]==(v + '0')){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>>& board){
    int n=board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(board[i][j]=='.'){
                for(int v=1;v<=9;v++){
                    if(issafe(i,j,board,n,v)){
                        board[i][j]=v+'0';

                        bool possible=solve(board);

                    if(possible) return true;
                    
                        board[i][j]='.';
                        
                    }
                    
                    
                }
                return false;
            }
        }
    }
    return true;
}
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};