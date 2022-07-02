class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1, 366*1000);
        dp[0] = 0;
        int during[] = {1, 7, 30};
        for(int i=0; i<days.size(); i++){
            for(int j=0; j<3; j++){
                auto index = upper_bound(days.begin(), days.begin() + i, days[i]-during[j]) - days.begin();
                dp[i+1] = min(dp[i+1], dp[index] + costs[j]);
            }
        }
        return dp[dp.size()-1];
    }
};