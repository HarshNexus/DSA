class Solution {
    public:
    int bs(vector<int>&arr,int s,int e, int k ){
    
    int mid=s+(e-s)/2;

    if(s>e){
        return -1;
    }
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        return bs(arr,s, mid-1,k );
        

    }
    else{
       return  bs(arr,mid+1, e, k );
    }
    return 0;
}
public:
    int search(vector<int>& nums, int target) {
        int ans=bs(nums,0,nums.size()-1,target);
        return ans;
    }
};