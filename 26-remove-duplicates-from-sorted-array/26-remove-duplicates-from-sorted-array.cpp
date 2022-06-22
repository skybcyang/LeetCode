class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return nums.erase(unique(nums.begin(), nums.end()), nums.end()) - nums.begin();
    }
};