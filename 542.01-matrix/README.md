# 542.01-matrix :star::star:
- 题目地址: [https://leetcode-cn.com/problems/01-matrix/](https://leetcode-cn.com/problems/01-matrix/)
- 执行时间: 188 ms | 击败了33.94%
- 内存消耗: 3.2 MB | 击败了66.67%
- 通过日期: 2020-06-17 00:24


## 题目内容
<p>给定一个由 0 和 1 组成的矩阵，找出每个元素到最近的 0 的距离。</p>

<p>两个相邻元素间的距离为 1 。</p>

<p><strong>示例 1: </strong><br>
输入:</p>

<pre>0 0 0
0 1 0
0 0 0
</pre>

<p>输出:</p>

<pre>0 0 0
0 1 0
0 0 0
</pre>

<p><strong>示例 2: </strong><br>
输入:</p>

<pre>0 0 0
0 1 0
1 1 1
</pre>

<p>输出:</p>

<pre>0 0 0
0 1 0
1 2 1
</pre>

<p><strong>注意:</strong></p>

<ol>
	<li>给定矩阵的元素个数不超过 10000。</li>
	<li>给定矩阵中至少有一个元素是 0。</li>
	<li>矩阵中的元素只在四个方向上相邻: 上、下、左、右。</li>
</ol>

## 解法
```cpp
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
```