class Solution {
public:
    void reverseString(vector<char>& s) {
        int f=0;
        int e=s.size()-1;
        while(f<=e){
            swap(s[f],s[e]);
            f++;
            e--;
        }
    }
};