class node{
    public:
    int d;
    int r;
    int c;

    node(int d,int r,int c){
        this ->d=d;
        this->r=r;
        this->c=c;

    }
};
class compare{
    public:
    bool operator()( node* a,node*b){
        return a->d > b->d;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums[0].size();
        priority_queue<node*,vector<node*>,compare> pq;

        for(int i=0;i<nums.size();i++){
            node* element=new node(nums[i][0],i,0);
            pq.push(element);
            maxi=max(maxi,element->d); 
            mini=min(mini,element->d);
        }

    int s=mini;
    int e=maxi;
        while(pq.size()>0){
            node* temp=pq.top();
            pq.pop();

            mini=temp->d;

            if(maxi-mini<e-s){
                s=mini;
                e=maxi;

            }
            
            if(temp->c+1<nums[temp->r].size()){
                maxi=max(maxi,nums[temp->r][temp->c+1]);
                node* newNode = new node(nums[temp->r][temp->c+1],temp->r,temp->c+1);
                pq.push(newNode);
            }
            else{
                break;
            }


        }
        return{e,s};
        
    }
};