class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res = 0;
        if(matrix.size() == 0){
            return res;
        }
        vector<vector<int>>dp (matrix.size()+1, vector<int>(matrix[0].size()+1, 0));
        for(int i=0; i<dp.size(); i++){
            dp[i][0] = 0;
        }
        for(int j=0; j<dp[0].size(); j++){
            dp[0][j] = 0;
        }

        for(int i=1; i<dp.size(); i++){
            for(int j=1; j<dp[0].size(); j++){
                if(matrix[i-1][j-1] == '1'){
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
                    res = max(res, dp[i][j]);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        return res*res;
    }
};