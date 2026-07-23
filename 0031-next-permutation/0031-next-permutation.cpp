class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        int pivot=-1;
        int m=pivot+1;

        
        while(i>=0){
            if(nums[i]<nums[i+1]){
                pivot=i;
                m = pivot + 1;
                for(int i=pivot+1;i<nums.size();i++){
                    if(nums[pivot]<nums[i] && nums[i]<=nums[m]){
                        m=i;
                    }
                }

                swap(nums[pivot],nums[m]);
                sort(nums.begin()+pivot+1,nums.end());
                break;
            }
            i--;
        }
        if (pivot == -1) {
    reverse(nums.begin(), nums.end());
}
       
    }
};