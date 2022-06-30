class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int N = edges.size();
        vector<int> boss(N+1);
        for(int i=1; i<=N; i++){
            boss[i] = i;
        }
        
        for(vector<int> edge: edges){
            int b1 = find(edge[0], boss);
            int b2 = find(edge[1], boss);
            if (b1 != b2){
                boss[b2] = b1;
            } else {
              return edge;  
            }
        }
        return {0,0};
    }
    // 在这里改了vector的传递方式，从32ms优化到8ms，原先打败了9%现在是93%，在计算的时候尽量减少vector的值传递，地址传递要快很多
    int find(int x, vector<int>& boss){
        int res = x;
        while(boss[res] != res){
            res = boss[res];
        }
        return res;
    }
};