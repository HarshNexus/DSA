class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=INT_MIN;
        int ans;
     auto i = mp.begin();
        while(i != mp.end()){
            if(i->second > maxi){
                maxi = i->second;
                ans = i->first;   // store the key
            }
            i++;
        }
        return ans;
    }
};