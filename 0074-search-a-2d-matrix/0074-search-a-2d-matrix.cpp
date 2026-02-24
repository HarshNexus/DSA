class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            int r = mid / col;
            int c = mid % col;
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
           
        }
        return false;
    }
};