class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> res(m, vector<int>(n, 10000));
        queue<pair<int, int>> que;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == 0) {
                    que.push({i, j});
                    res[i][j] = 0;
                }
            }
        }
        vector<pair<int, int>> directions{{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
        while (que.size()) {
            auto cur = que.front();
            for (auto direction: directions) {
                pair<int, int> newPos{cur.first+direction.first, cur.second+direction.second};
                if (newPos.first >= 0 && newPos.first < m &&
                    newPos.second >= 0 && newPos.second < n &&
                    matrix[newPos.first][newPos.second] == 1 &&
                    res[cur.first][cur.second] + 1 <= res[newPos.first][newPos.second]) {
                    res[newPos.first][newPos.second] = res[cur.first][cur.second] + 1;
                    que.push(newPos);
                }
            }
            que.pop();
        }
        return res;
    }
};