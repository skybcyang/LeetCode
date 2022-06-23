class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            int num[10]={0};
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    if(num[board[i][j]-'0']==1)return false;
                    num[board[i][j]-'0']++;
                }
            }
        }
        for(int i=0; i<9; i++){
            int num[10]={0};
            for(int j=0; j<9; j++){
                if(board[j][i] != '.'){
                    if(num[board[j][i]-'0']==1)return false;
                    num[board[j][i]-'0']++;
                }
            }
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                int num[10]={0};
                for(int k=0; k<3; k++){
                    for(int l=0; l<3; l++){
                        if(board[i*3+k][j*3+l] != '.'){
                            if(num[board[i*3+k][j*3+l]-'0']==1)return false;
                            num[board[i*3+k][j*3+l]-'0']++;
                        }
                    }
                }
            }
        }
        return true;
    }
};