#define MOD 1000000007
class Solution {
private:
    int solve(long long n, long long i, long long int ans) {

        while(i > 0) {
            if(i % 2 == 1) {
                ans = (ans * n) % MOD;
            }

            n = (n * n) % MOD;
            i /= 2;
        }

        return ans;
    }

public:
    int countGoodNumbers(long long n) {
       long long  int e = (n + 1) / 2;
    long long int o = n / 2;
        long long int ans = 1;
        return (1LL *solve(5, e,ans)*solve(4, o,ans)) % MOD;
    }
};