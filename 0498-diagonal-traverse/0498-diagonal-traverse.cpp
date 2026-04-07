class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<(m+n-1);i++){
            vector<int> temp;
            int r = (i < n) ? 0 : i - n + 1;
            int c = (i < n) ? i : n - 1;
            while(r<m &&c>=0){
                temp.push_back(mat[r][c]);
                r++;
                c--;
            }
            if(i%2==0){
                reverse(temp.begin(),temp.end());
            }
            ans.insert(ans.end(), temp.begin(), temp.end());

        }
        
    
       return ans;
    }
    
};