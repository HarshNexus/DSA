class Solution {
private:
void solve(vector<int>& nums,vector<vector<int>> &ans,int i,vector<int>output){
    if(i>=nums.size()){
        ans.push_back(output);
        return;
    }
     solve(nums,ans,i+1,output);

    output.push_back(nums[i]);
      solve(nums,ans,i+1,output);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums,ans,0,output);
        return ans;

    }
};