class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>tmp;
        func(nums, 0, tmp);
        return res;
    }
    void func(vector<int>& nums, int n, vector<int> tmp){
        if(n == nums.size()){
            res.push_back(tmp);
        }
        else{
            func(nums, n+1, tmp);
            tmp.push_back(nums[n]);
            func(nums, n+1, tmp);
        }
    }
};