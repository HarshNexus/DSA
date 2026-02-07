class Solution {
    private:
bool ispossible(vector<int>& nums, int k, int mid){
    int scount=1;
    int pages=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(pages+nums[i]<=mid){
            pages+=nums[i];
        }
        else{
            scount++;
            if(scount>k||nums[i]>mid){
                return false;
            }
            pages=nums[i];
        }
    } return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int ans=-1;
        int s=0;
        int e=sum;
        int mid=s+(e-s)/2;
        if(k>n) return -1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(ispossible(nums,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};