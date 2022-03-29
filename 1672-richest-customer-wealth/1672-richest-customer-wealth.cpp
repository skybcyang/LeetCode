class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxRes = 0;
        int maxTmp = 0;
        for (auto& x: accounts) {
            maxTmp = 0;
            for (auto y: x) {
                maxTmp += y;
            }
            maxRes = max(maxTmp, maxRes);
        }
        return maxRes;
    }
};