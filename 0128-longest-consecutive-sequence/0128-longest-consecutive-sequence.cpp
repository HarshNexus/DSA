class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
    return 0;
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans=1;
        int cnt=1;

        for (auto it = mp.begin(); it != prev(mp.end()); ++it) {
        auto nextIt = next(it);

    if (nextIt->first - it->first == 1) {
        cnt++;
    }
    else{
        cnt=1;
    }
    ans=max(ans,cnt);
}
return ans;;
    }
};