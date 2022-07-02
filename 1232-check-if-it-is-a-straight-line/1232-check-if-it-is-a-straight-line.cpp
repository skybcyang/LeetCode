class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2)return true;
        if(coordinates[1][0] == coordinates[0][0]){
            for(auto x: coordinates){
                if(x[0] != coordinates[0][0]){
                    return false;
                }
            }
            return true;
        }
        double k = (coordinates[1][1] - coordinates[0][1])*1.0 / (coordinates[1][0] - coordinates[0][0]);
        for(int i = 2; i<coordinates.size(); i++){
            if(((coordinates[i][1]-coordinates[0][1])*1.0 / (coordinates[i][0] - coordinates[0][0])) != k){
                return false;
            }
        }
        return true;
    }
};