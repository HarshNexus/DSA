class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                x++;
            }
        }
        if(nums[n-1]>nums[0]){
            x++;
        }
        return x<=1;
    }
};