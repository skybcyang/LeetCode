class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        if (n<k) return {};
        int cur = 1;
        vector<int> tmp;
        getRes(n, k, cur, tmp);
        return res;
    }
    void getRes(int n, int k, int cur, vector<int>& tmp){
        for(int i=cur; i<= n; i++){
            // 这里做了一个剪枝。优化了一些
            if(tmp.size() + (n-i+1) <k)return;
            tmp.push_back(i);
            if(tmp.size()==k){
                res.push_back(tmp);
            }
            getRes(n,k,i+1,tmp);
            tmp.pop_back();
        }
    }
};