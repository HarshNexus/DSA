class Solution {
private:
void solve(int in,vector<string> &ans,string o,vector<string> &s,string digits){
    if(in==digits.size()){
        ans.push_back(o);
        return;
    }
    int a=digits[in]-'0';
    string v=s[a];
    for(int i=0;i<v.size();i++){
        o.push_back(v[i]);
        solve(in+1,ans,o,s,digits);
        o.pop_back();
    }

}
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string o="";
        vector<string> s={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,ans,o,s,digits);
        return ans;

    }
};