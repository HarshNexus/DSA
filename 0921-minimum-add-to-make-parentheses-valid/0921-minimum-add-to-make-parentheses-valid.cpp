class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int o=0;
        int a=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(') o++;
            else{
                if(o>0) o--;
                else a++;
            }
            
        }
        return o+a;
    }
};