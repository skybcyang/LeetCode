class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        dfs("", 0, n);
        return res;
    }
    void dfs(string s, int left_num, int n){
        if(left_num == 0 && n == 0){
            res.push_back(s);
        }
        if(n != 0 && left_num < n){
            dfs(s+'(', left_num+1, n);
        }
        if(left_num != 0){
            dfs(s+')', left_num-1, n-1);
        }
    }
};