class Solution {
public:
    void dfs(int i, vector<bool>& visited, vector<vector<int>>& M) {
        visited[i] = true;
        for(int j=0; j<M[i].size(); j++) {
            if (M[i][j] == 1 && !visited[j] && i != j){
                dfs(j, visited, M);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& M) {
        int res = 0;
        vector<bool> visited(M.size(), false);
        for (int i=0; i<M.size(); i++) {
            if (!visited[i]) {
                dfs(i, visited, M);
                res++;
            }
        }
        return res;
    }
};