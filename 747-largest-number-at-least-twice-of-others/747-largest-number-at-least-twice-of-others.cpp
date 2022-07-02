class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() == 1)return 0;
        vector<int>tmp(nums.begin(), nums.end());
        sort(tmp.begin(), tmp.end());
        if(tmp[tmp.size()-1] >= 2* tmp[tmp.size()-2]){
            return max_element(nums.begin(), nums.end()) - nums.begin();
        }
        return -1;
    }
};