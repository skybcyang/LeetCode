class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res = 0;
        vector<int>sub;
        for(auto cost: costs){
            res += cost[1];
            sub.push_back(cost[1] - cost[0]);
        }
        sort(sub.begin(), sub.end());
        for(int i=sub.size()/2; i<sub.size(); i++){
            res -= sub[i];
        }
        return res;
    }
};