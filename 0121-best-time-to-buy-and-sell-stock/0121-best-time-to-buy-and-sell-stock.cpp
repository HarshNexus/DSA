class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c=0;
        int s=0;
        int pro=INT_MIN;
        while(s<prices.size() && c<=s){
            if(prices[c]>prices[s]){
                c=s;
            }
            pro=max(pro,prices[s]-prices[c]);
            s++;
        }
        return pro;
    }
};