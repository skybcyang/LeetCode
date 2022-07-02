class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        set<pair<int, int>> rowMin;
        set<pair<int, int>> colonMax;
        for(int i=0; i<matrix.size(); i++){
            int min_value = 100000;
            int min_value_j = 0;
            for (int j=0; j<matrix[i].size(); j++){
                if (min_value > matrix[i][j]){
                    min_value = matrix[i][j];
                    min_value_j = j;
                }
            }
            rowMin.insert(make_pair(i,min_value_j));
        }

        for(int j=0; j<matrix[0].size(); j++){
            int max_value = 0;
            int max_value_i = 0;          
            for (int i=0; i<matrix.size(); i++){
                if (max_value < matrix[i][j]){
                    max_value = matrix[i][j];
                    max_value_i = i;
                }
            }
            colonMax.insert(make_pair(max_value_i,j));
        }

        for(auto p: rowMin){
            if (colonMax.count(p) != 0){
                res.push_back(matrix[p.first][p.second]);
            }
        }
        
        return res;
    }
};