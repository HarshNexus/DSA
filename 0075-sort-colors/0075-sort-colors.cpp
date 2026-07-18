class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0;
        int w=0;
        int b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                r++;
            nums.pop_back();
            }
            if(nums[i]==1){ w++;
            nums.pop_back();}
            if(nums[i]==2) {b++;
            nums.pop_back();}

        }
        while(r!=0){
            nums.push_back(0);
            r--;
        }
        while(w!=0){
            nums.push_back(1);
            w--;
        }
        while(b!=0){
            nums.push_back(2);
            b--;
        }
       
        }
};