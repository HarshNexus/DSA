class Solution {
private:
    int findPivot(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }

        else{
            e=mid;
        }
        
        }
        return s;

    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        int mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;

    }

public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int p = findPivot(nums);

        if (target >= nums[p] && target <= nums[n - 1])
            return binarySearch(nums, p, n - 1, target);
        else
            return binarySearch(nums, 0, p - 1, target);
    }
};
