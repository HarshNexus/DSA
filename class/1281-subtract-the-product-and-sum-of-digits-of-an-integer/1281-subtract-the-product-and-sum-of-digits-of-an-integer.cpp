class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0; 
        int pro=1;
        int m;
        while(n!=0){
            m=(n%10);
        sum = sum+m;
        pro=pro*m;
        n=n/10;
        }
        int ans=pro-sum;
        return ans;
    }
};