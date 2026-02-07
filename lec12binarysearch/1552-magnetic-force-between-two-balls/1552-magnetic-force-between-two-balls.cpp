class Solution {
    private:
    bool ispossible(vector<int> position, int m,int mid){
        int balls=1;
        int lp=position[0];
        int n=position.size();
        for(int i=1;i<n;i++){
            if(position[i]-lp>=mid){
               balls++;
               if(balls==m){
                 return true;
               }
               lp=position[i];

            }
        }
        return false;

    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int ans=0;
        int max=-1;
        int n=position.size();
        for(int i=0;i<n;i++){
            if(max<=position[i]){
                max=max+position[i];
            }
        }
        int s=0;
        int e=max;
        int mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            if(ispossible(position,m,mid)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;

    }
};