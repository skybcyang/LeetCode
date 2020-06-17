class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res = 0;
        if (matrix.size() == 0) return res;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == '1') {
                    dp[i+1][j+1] = min(dp[i][j], min(dp[i][j+1], dp[i+1][j])) + 1;
                    res = max(res, dp[i+1][j+1]);
                }
            }
        }
        return res*res;
    }
};