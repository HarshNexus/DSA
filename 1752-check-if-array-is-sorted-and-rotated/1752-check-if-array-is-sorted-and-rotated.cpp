class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]>nums[j]) count++;
                i++;
                j++;
        }

        if (nums[nums.size()-1] > nums[0])
            count++;
            
        if(count>1) return false;
         return true;
    }
};