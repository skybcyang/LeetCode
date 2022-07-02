class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for(int i = 1; i < n; i++){
            dp[i] = min(min(2 * dp[p2], 3 * dp[p3]), 5 * dp[p5]);
            if(dp[i] >= 2 * dp[p2]) p2++;
            if(dp[i] >= 3 * dp[p3]) p3++;
            if(dp[i] >= 5 * dp[p5]) p5++;
        }
        return dp[n-1];
    }
};