class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for(auto row : grid){
            for(auto col : row){
                if(col < 0){
                    res++;
                }
            }
        }
        return res;
    }
};