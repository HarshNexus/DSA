class Solution {
private:
void solve( int k1,int s, vector<int> out,vector<vector<int>>& ans,
int n,int t,vector<int> &arr,int in) {

    if(k1==n &&s==t){
        ans.push_back(out);
        return;
    } 
    if(k1==n || s>=t) return;
    

    for(int i=in;i<arr.size();i++){
        out.push_back(arr[i]);
        solve(k1+1,s+arr[i],out, ans,n,t,arr,i+1);
        out.pop_back();
    }


}

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> out;
        vector<int> arr;
        for(int i=0;i<9;i++){
            arr.push_back(i+1);
        }
        solve(0,0,out, ans,k,n,arr,0);
        return ans;
    }
};