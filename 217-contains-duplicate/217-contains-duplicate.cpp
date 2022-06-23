class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numSet;
        for (auto num: nums) {
            numSet.insert(num);
        }
        return numSet.size() != nums.size();
    }
};