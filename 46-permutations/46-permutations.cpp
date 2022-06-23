class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>tmp;
        vector<int> used(nums.size(), 0);
        dfs(nums, used, tmp, res);
        return res;
    }
    void dfs(vector<int>& nums, vector<int>& used, vector<int>& tmp, vector<vector<int>>& res){
        for(int i=0; i< nums.size(); i++){
            if(used[i] == 0){
                tmp.push_back(nums[i]); 
                if(nums.size() == tmp.size()){
                    res.push_back(tmp);
                }
                used[i] = 1;
                dfs(nums, used, tmp, res);
                used[i] = 0;
                tmp.pop_back();
            }
        }
    }
};