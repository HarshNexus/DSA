class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> w;
        string ans;
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j=i;
            while(j<n && s[j]!=' ')
                j++;
            w.push_back(s.substr(i,j-i));
            i=j;
        }

        for(int i=w.size()-1;i>=0;i--){
            ans+= w[i];
            if(i>0) ans+=" ";
        }
        return ans;
    }
};