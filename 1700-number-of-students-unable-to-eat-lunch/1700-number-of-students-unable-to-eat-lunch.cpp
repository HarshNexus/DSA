class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=sandwiches.size();
        int c1=0;
        int c0=0;
        for(int i=0;i<n;i++){
            if(students[i]==0) c0++;
            else c1++;
        }
        for(int i=0;i<n;i++){
            if(sandwiches[i]==0){
                if(c0==0) break;
                c0--;
            }
            else{
                if(c1==0) break;
                c1--;
            }
        }
        return c0+c1;
    }
};