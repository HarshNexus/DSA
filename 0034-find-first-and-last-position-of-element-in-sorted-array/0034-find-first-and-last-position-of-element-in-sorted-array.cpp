class Solution {
    private:
    int fo(vector<int>& nums, int t){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid= s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            mid= s+(e-s)/2;
            if(nums[mid]==t){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>t){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int lo(vector<int>& nums, int t){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid= s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            mid= s+(e-s)/2;
            if(nums[mid]==t){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>t){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(fo(nums,target));
        ans.push_back(lo(nums,target));
        return ans;
    }
};