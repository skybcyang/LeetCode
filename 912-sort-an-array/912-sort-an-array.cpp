class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty()) return {};
        vector<int> buckets(100001, 0);
        for (auto x : nums){
            buckets[x + 50000] ++;
        }
            
        vector<int> res;
        for (int i = 0; i < 100001; ++i) {
            for (int j = 0; j < buckets[i]; ++j) {
                res.push_back(i - 50000);
            }
        }
        return res;
    }
};