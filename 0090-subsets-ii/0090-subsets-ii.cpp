class Solution {
private:
void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int> output, int i){

    if(i >= nums.size()){
        ans.push_back(output);
        return;
    }

    // include
    output.push_back(nums[i]);
    solve(nums, ans, output, i+1);

    // backtrack
    output.pop_back();

    // skip duplicates
    int index = i + 1;
    while(index < nums.size() && nums[index] == nums[index-1]){
        index++;
    }

    // exclude
    solve(nums, ans, output, index);
}

public:
vector<vector<int>> subsetsWithDup(vector<int>& nums) {

    vector<vector<int>> ans;
    vector<int> output;

    sort(nums.begin(), nums.end());
    solve(nums, ans, output, 0);

    return ans;
}
};