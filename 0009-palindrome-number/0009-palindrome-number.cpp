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
        if(x>=0 && reverse(x)==x){
            return 1;

        }
        return 0;
    }
};