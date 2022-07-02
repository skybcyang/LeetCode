class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int, int>> que;
        vector<vector<int>> distance(grid.size(), vector<int>(grid[0].size(), 1000000));
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    que.push({i,j});
                    distance[i][j] = 0;
                }
            }
        }
        if (que.size() == 0 || que.size() == grid.size()*grid[0].size()){
            return -1;
        }
        vector<pair<int, int>> directions {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        while (que.size()) {
            auto cur = que.front();
            for (auto direction: directions) {
                pair<int, int> newPos {cur.first + direction.first, cur.second + direction.second};
                if (newPos.first >= 0 && newPos.first < grid.size() &&
                    newPos.second >= 0 && newPos.second < grid[0].size() &&
                    grid[newPos.first][newPos.second] == 0) {
                    if (distance[cur.first][cur.second] + 1 < distance[newPos.first][newPos.second]) {
                        distance[newPos.first][newPos.second] = distance[cur.first][cur.second] + 1;
                        que.push({newPos.first, newPos.second});
                    }
                }
            }
            que.pop();
        }
        int res = 0;
        for (int i=0; i<distance.size(); i++) {
            for (int j=0; j<distance[0].size(); j++) {
                res = max(res, distance[i][j]);
            }
        }
        return res;
    }
};