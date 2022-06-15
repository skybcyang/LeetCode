class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> numMp;
        for (int i = 0; i < nums.size(); i++) {
            if (numMp.count(target - nums[i]) == 1){
                return {numMp[target - nums[i]], i};
            }
            numMp[nums[i]] = i;
        }
        return {};
    }
};