class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        if(m==0)
        return 1;
        int mas=0;
        while(m!=0){
            mas=(mas<<1)|1;
            m=m>>1;
        }
        int ans=(~n)&mas;
        return ans;
    }
};