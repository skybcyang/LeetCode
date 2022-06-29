class Solution {
public:
    int arrangeCoins(int n) {
        if(n == 0) return 0;
        long long i=1;
        while(n>=((1+i)*i/2)) i++;
        return i-1;
    }
};