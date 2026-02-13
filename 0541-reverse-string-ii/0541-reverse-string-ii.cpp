class Solution {

public:
    string reverseStr(string s, int k) {
        int n=s.size();
       
        for(int i=0;i<n;i=i+2*k){
            int f=i;
            int e=min(i+k-1,n-1);
            while(f<e){
                swap(s[f],s[e]);
            f++;
            e--;
            }
        }
    return s;
    }
};