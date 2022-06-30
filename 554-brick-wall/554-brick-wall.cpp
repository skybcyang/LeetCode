class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int tmpsum = 0;
        int res = 0;
        map<int,int>count;
        for(int i=0; i<wall.size(); i++){
            tmpsum = 0;
            for(int j=0; j<wall[i].size(); j++){
                tmpsum += wall[i][j];
                if(count.find(tmpsum)!=count.end()){
                    count[tmpsum]++;
                }
                else{
                    count[tmpsum]=1;
                }
            }
        }
        count[tmpsum] = 0;
        for(auto it = count.begin(); it != count.end(); ++it){
            if(it->second>res){
                res = it->second;
            }
        }
        return wall.size()-res;
    }
};