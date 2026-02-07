class Solution {
    private:
    bool ispossible(vector<int> weights, int days, int mid){
    int pc=1;
    int w=0;
    int n=weights.size();
    for(int i=0;i<n;i++){
        if(w+weights[i]<=mid){
            w+=weights[i];
        }
        else{
            pc++;
            if(pc>days||weights[i]>mid){
                return false;
            }
            w=weights[i];
        }
    }
    return true;

}
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=-1;
    int sum=0;
    int n=weights.size();
    for(int i=0;i<n;i++){
        sum=sum+weights[i];
    }
    int s=0;
    int e=sum;
    int mid=s+(e-s)/2;
    if(days>n) return -1; 
    while(s<=e){
        mid=s+(e-s)/2;
        if(ispossible(weights,days,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
            
        }
    }
    return ans;

    }
};