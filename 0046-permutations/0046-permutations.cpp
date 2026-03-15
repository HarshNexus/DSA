class Solution {
private:
void solve( vector<vector<int>> &ans,  vector<int> &nums,int in){
    if(in>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j=in;j<nums.size();j++){
        swap(nums[in],nums[j]);
        solve(ans,nums,in+1);
        swap(nums[in],nums[j]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans,nums,0);
        return ans;
    }
};