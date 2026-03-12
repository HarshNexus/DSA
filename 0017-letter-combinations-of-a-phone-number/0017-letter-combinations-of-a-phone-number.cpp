class Solution {
    private:
    void solve(string digits,string output,vector<string> &ans, string value[],int index){
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string num=value[number];
        for(int i=0;i<num.size();i++){
            output.push_back(num[i]);
            solve(digits,output,ans,value,index+1);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        if(digits.length()==0) return ans;
        string value[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,ans,value,0);
        return ans;
    }
};