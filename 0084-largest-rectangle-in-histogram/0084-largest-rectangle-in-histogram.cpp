class Solution {
    private:
    vector <int> nextsmall(vector<int>& arr,int n){
         vector<int> ans(n);
   stack<int> s;
   for(int i=n-1;i>=0;i--){
      while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
      if(s.empty()) ans[i]=-1;
      else ans[i]=s.top();
      s.push(i);
   }
   return ans;
    }

    vector <int> prevsmall(vector<int>& arr,int n){
         vector<int> ans(n);
   stack<int> s;
   for(int i=0;i<n;i++){
      while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
      if(s.empty()) ans[i]=-1;
      else ans[i]=s.top();
      s.push(i);
   }
   return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next;
        next=nextsmall(heights,n);
    int area=INT_MIN;
        vector<int>prev;
        prev=prevsmall(heights,n);
        for(int i=0;i<n;i++){
            int l=heights[i];
        if(next[i]==-1) next[i]=n;
        int b=next[i]-prev[i]-1;
        int newarea=l*b;
        area=max(area,newarea);
        }
    return area;

    }
};