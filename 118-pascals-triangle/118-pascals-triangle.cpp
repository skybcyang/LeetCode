class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1; i<=numRows; i++){
            vector<int> tmp(i);
            tmp[0] = 1;
            tmp[i-1] = 1;
            if(i >2){
                for(int j=1; j< i-1;j++){
                    tmp[j] = res[i-2][j-1]+ res[i-2][j];
                }
            }
            res.push_back(tmp);
        }
        return res;
    }
};