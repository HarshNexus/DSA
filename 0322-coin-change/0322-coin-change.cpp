class Solution {
private:
int solve(vector<int>& coins, int amount,vector<int>& dp){
    int n=amount;
    if(amount==0) return 0;
    if(amount<0)  return INT_MAX;

    if(dp[n]!=-1){
        return dp[n];
    }
    int mini=INT_MAX;
    for(int i = 0; i < coins.size(); i++){
            int ans = solve(coins, amount - coins[i], dp);
            
            if(ans != INT_MAX){
                mini = min(mini, 1 + ans);
            }
        }
    return dp[n]=mini;

}
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(amount+1,-1);
        int ans=solve(coins,amount,dp);
        if(ans==INT_MAX) return -1;
        return ans;

    }
};