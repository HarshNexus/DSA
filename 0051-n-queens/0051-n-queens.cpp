class Solution {
private:
void add(vector<vector<char>> &b, vector<vector<string>> &ans,int n){
    vector<string>temp;
    for(int i=0;i<n;i++){
    string s="";
    for(int j=0;j<n;j++){
        s.push_back(b[i][j]);
    }
    temp.push_back(s);
}
    ans.push_back(temp);
}
bool issafe(int r,int c,vector<vector<char>> &b,int n){
    // straight line
    int x=r;
    int y=c;
    while(y>=0){
        if(b[x][y]=='Q')
            return false;
            y--;
        
    }
// upper diag
    x=r;
    y=c;
    while(y>=0 && x>=0){
        if(b[x][y]=='Q')
            return false;
            y--;
            x--;
        
    }

     x=r;
    y=c;
    while(y>=0 && x<n){
        if(b[x][y]=='Q')
            return false;
            y--;
            x++;
        
    }
    return true;
}
void solve(int c,vector<vector<char>> &b, vector<vector<string>> &ans,int n){
    if(c==n){
        add(b,ans,n);
        return;
    }

    for(int i=0;i<n;i++){
        if(issafe(i,c,b,n)){
            b[i][c]='Q';
            solve(c+1,b,ans,n);
            b[i][c]='.';
        }
    }
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> b(n,vector<char>(n,'.'));
        vector<vector<string>> ans;

        solve(0,b,ans,n);
        return ans;
    }
};