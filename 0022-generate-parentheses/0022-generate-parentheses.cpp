class Solution {
private:
void solve(vector<string> &ans,int n,string ou,int o, int c){
    
    if(ou.size()==2*n){
        ans.push_back(ou);
        return;
    }

    if(o<n){
        ou.push_back('(');
        solve(ans,n,ou,o+1,c);
        ou.pop_back();
    }
    if(c<o){
        ou.push_back(')');
        solve(ans,n,ou,o,c+1);
        ou.pop_back();
    }
    
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string ou="";
        solve(ans,n,ou,0,0);
        return ans;
    }
};