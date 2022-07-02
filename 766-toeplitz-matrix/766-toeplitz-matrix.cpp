class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            if(i == 0){
                for(int j=0; j<matrix[0].size(); j++){
                    int tmpv = matrix[i][j];
                    int tmpi = i, tmpj = j;
                    while(tmpi<matrix.size() && tmpj <matrix[0].size()){
                        if(matrix[tmpi][tmpj] != tmpv){
                            return false;
                        }
                        tmpi++;
                        tmpj++;
                    }
                }
            }
            else{
                int tmpv = matrix[i][0];
                int tmpi = i, tmpj = 0;
                while(tmpi<matrix.size() && tmpj <matrix[0].size()){
                    if(matrix[tmpi][tmpj] != tmpv){
                        return false;
                    }
                    tmpi++;
                    tmpj++;
                }
            }
        }
        return true;
    }
};