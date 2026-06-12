class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int m=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<m){
                m=prices[i]; 
            }
            else if(prices[i]-m>pro){
                pro=prices[i]-m;
            }
        }
        return pro;
    }
};