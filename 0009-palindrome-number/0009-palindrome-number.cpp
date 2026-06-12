class Solution {
public:
int reverse(int n){
         long int reverse = 0;
        while(n!=0){
            int digit = n%10;
            reverse=reverse*10+digit;
            n=n/10;
        }
        return reverse;
    }

    bool isPalindrome(int x) {
        if(x < 0) return false;
        // int st=0;
        // string s=to_string(x);
        // int e=s.size()-1;
        // while(st<e){
        //     if(s[st]!=s[e]) return false;
        //     st++;
        //     e--;
        // }
        // return true;

        return reverse(x)==x;
    }
};