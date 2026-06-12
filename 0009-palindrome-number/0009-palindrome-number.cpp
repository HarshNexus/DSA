class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int st=0;
        string s=to_string(x);
        int e=s.size()-1;
        while(st<e){
            if(s[st]!=s[e]) return false;
            st++;
            e--;
        }
        return true;
    }
};