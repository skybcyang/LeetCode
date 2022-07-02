class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto x = lower_bound(nums.begin(), nums.end(), target);
        if(x == nums.end()){
            return -1;
        }
        if(*x == target){
            return x-nums.begin();
        }
        return -1;
    }
};