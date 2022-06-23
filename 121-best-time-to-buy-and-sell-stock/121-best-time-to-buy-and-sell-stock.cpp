class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, tmp = 0;
        for (int i=1; i<prices.size(); i++) {
            tmp = max(0, tmp + prices[i] - prices[i-1]);
            res = max(res, tmp);
        }
        return res;
    }
};