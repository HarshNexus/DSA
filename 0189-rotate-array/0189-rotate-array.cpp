class Solution {
private:
void rotate(int i,int j,vector<int>& nums){
while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
}
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int n=nums.size();
        rotate(0,n-k-1,nums);
        rotate(n-k,n-1,nums);
        rotate(0,n-1,nums);

    }
};