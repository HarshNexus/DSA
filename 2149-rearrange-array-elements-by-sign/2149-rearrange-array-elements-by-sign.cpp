class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     stack<int>st;
     vector<int>ans;
     for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]<0){
            st.push(nums[i]);
        }
     }   
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            ans.push_back(nums[i]);
        int a=st.top();
        st.pop();
        ans.push_back(a);
        }
    }
    return ans;
    }
};