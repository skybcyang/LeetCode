# 221.maximal-square :star::star:
- 题目地址: [https://leetcode-cn.com/problems/maximal-square/](https://leetcode-cn.com/problems/maximal-square/)
- 执行时间: 20 ms  | 击败了73.46%
- 内存消耗: 8.9 MB | 击败了100.00%
- 通过日期: 2020-06-18 02:03


## 题目内容
<p>在一个由 0 和 1 组成的二维矩阵内，找到只包含 1 的最大正方形，并返回其面积。</p>

<p><strong>示例:</strong></p>

<pre><strong>输入: 
</strong>
1 0 1 0 0
1 0 <strong>1 1</strong> 1
1 1 <strong>1 1 </strong>1
1 0 0 1 0

<strong>输出: </strong>4</pre>

## 解法
```cpp
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res = 0;
        if (matrix.size() == 0) return res;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == '1') {
                    dp[i+1][j+1] = min(dp[i][j], min(dp[i][j+1], dp[i+1][j])) + 1;
                    res = max(res, dp[i+1][j+1]);
                }
            }
        }
        return res*res;
    }
};
```