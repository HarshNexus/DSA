class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string a = "";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                a+=tolower(s[i]);
            }
        }
        int i=0;
        int j=a.size()-1;
        while(i<j){
            if(a[i]!=a[j]){
                return false;
                
            }
            i++;
                j--;
        }
        return true;
    }
};