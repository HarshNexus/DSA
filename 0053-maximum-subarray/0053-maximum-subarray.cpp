class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  cs=0;
         int  ms=INT_MIN;

        for(int i=0;i<nums.size();i++){
            cs=max(nums[i],cs+nums[i]);
            ms=max(ms,cs);
        }
        return ms;
    }
};