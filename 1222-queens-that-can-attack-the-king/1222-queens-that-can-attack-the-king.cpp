class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>>res;
        vector<vector<int>>arr(9, vector<int>(9));
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                arr[i][j]=0;
            }
        }
        for(vector<int> q : queens){
            arr[q[0]][q[1]] = 1;
        }
        
        // 左上
        int x = king[0], y = king[1];
        while(x>=0 && y>=0 && arr[x][y]==0) { x--; y--; }
        if(x>=0 && y>=0) res.push_back({x,y});
        
        // 上
        x = king[0], y = king[1];
        while(x>=0 && arr[x][y]==0) x--;
        if(x>=0) res.push_back({x,y});
        
        // 右上
        x = king[0], y = king[1];
        while(x>=0 && y<9 && arr[x][y]==0) { x--; y++; }
        if(x>=0 && y<9) res.push_back({x,y});
                
        // 左
        x = king[0], y = king[1];
        while(y>=0 && arr[x][y]==0) y--;
        if(y>=0) res.push_back({x,y});
                
        // 右
        x = king[0], y = king[1];
        while(y<9 && arr[x][y]==0) y++;
        if(y<9) res.push_back({x,y});
        
        // 左下
        x = king[0], y = king[1];
        while(x<9 && y>=0 && arr[x][y]==0) { x++; y--; }
        if(x<9 && y>=0) res.push_back({x,y});
        
        // 下
        x = king[0], y = king[1];
        while(x<9 && arr[x][y]==0) x++;
        if(x<9) res.push_back({x,y});

        // 右下
        x = king[0], y = king[1];
        while(x<9 && y<9 && arr[x][y]==0) { x++; y++; }
        if(x<9 && y<9) res.push_back({x,y});

        
        return res;
        
    }
};