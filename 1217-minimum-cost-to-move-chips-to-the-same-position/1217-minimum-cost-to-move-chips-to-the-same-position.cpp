class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int j = 0, o = 0;
        for(int i: chips){
            if(i%2 == 0){
                j++;
            }else{
                o++;
            }
        }
        return min(j, o);
    }
};