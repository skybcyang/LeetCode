class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> set_res;
        vector<vector<int>> res;
        vector<int>tmp;
        vector<int> use(nums.size());
        for(int i=0; i<use.size(); i++){
            use[i] = 0;
        }
        
        dfs(nums, use, tmp, set_res);
        res.assign(set_res.begin(), set_res.end());
        return res;
    }
    void dfs(vector<int>& nums, vector<int>& use, vector<int>& tmp, set<vector<int>>& set_res){
        for(int i=0; i< nums.size(); i++){
            if(use[i] == 0){
                tmp.push_back(nums[i]); 
                if(nums.size() == tmp.size()){
                    set_res.insert(tmp);
                }
                use[i] = 1;
                dfs(nums, use, tmp, set_res);
                use[i] = 0;
                tmp.pop_back();
            }
        }
    }
};