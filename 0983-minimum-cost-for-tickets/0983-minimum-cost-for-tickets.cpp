class Solution {
private:
int solve(int n, vector<int>& days, vector<int>& costs, int i,vector<int> &dp){

    if(i>=n) return 0;

    if(dp[i]!=-1) return dp[i];

    int op1=costs[0]+solve(n,days,costs,i+1,dp);

    int j=i;
    for(;j<n && days[j]<days[i]+7;j++);
    int op2=costs[1]+solve(n,days,costs,j,dp);

     j=i;
    for(;j<n && days[j]<days[i]+30;j++);
    int op3=costs[2]+solve(n,days,costs,j,dp);

    dp[i]= min(op1,min(op2,op3));
    return dp[i];
}

int solvetab(int n, vector<int>& days, vector<int>& costs){

    vector<int> dp(n+1,INT_MAX);

    dp[n]=0;
    for(int k=n-1;k>=0;k--){
        int op1=costs[0]+dp[k+1];

    int j=k;
    for(;j<n && days[j]<days[k]+7;j++);
    int op2=costs[1]+dp[j];

     j=k;
    for(;j<n && days[j]<days[k]+30;j++);
    int op3=costs[2]+dp[j];

    dp[k]= min(op1,min(op2,op3));
    }
    return dp[0];
}
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int> dp(n+1,-1);
       return solvetab(n,days,costs); 
    }
};