class Solution {
public:
    int dfs(long long x, int S, vector<int>& nums, int idx){
        if (idx == nums.size() - 1){
            return ((x + nums[idx] == S) ? 1 : 0) + ((x - nums[idx] == S) ? 1 : 0);
        }
        return dfs(x+nums[idx], S, nums, idx+1) + dfs(x-nums[idx], S, nums, idx+1);
    }

    int findTargetSumWays(vector<int>& nums, int S) {
        return dfs(0, S, nums, 0);
    }
};
