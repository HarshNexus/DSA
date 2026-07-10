class Solution {
class node{
    public:
    int d;
    int r;
    int c;

    node(int d, int r,int c){
        this->d=d;
        this->r=r;
        this->c=c;
    }
};
class compare{
    public:
    bool operator()(node*a,node*b){
        return a->d>b->d;
    }
};
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;

    priority_queue<node*,vector<node*>,compare> pq;
        for(int i=0;i<nums.size();i++){
            node* el=new node(nums[i][0],i,0);
            maxi=max(maxi,nums[i][0]);
            mini=min(mini,nums[i][0]);
            pq.push(el);
        }

        int s=mini;
        int e=maxi;

        while(pq.size()>0){
            node*temp=pq.top();
            pq.pop();

            mini=temp->d;

            if(maxi-mini<e-s){
                e=maxi;
                s=mini;
            }

            if(temp->c+1 < nums[temp->r].size()){
                node* n= new node(nums[temp->r][temp->c+1],temp->r,temp->c+1);
                maxi=max(maxi,nums[temp->r][temp->c+1]);
                pq.push(n);
            }
            else{
                break;
            }
        }
        return {s,e};
}
};