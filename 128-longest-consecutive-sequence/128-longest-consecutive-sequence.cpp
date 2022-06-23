class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        sort(nums.begin(), nums.end());
        int res = 1;
        int i = 0;
        int tmpl = 0;
        while(i < nums.size() - 1){
            tmpl = 1;
            while(i < nums.size() - 1 && (nums[i+1] - nums[i] == 1 || nums[i+1] == nums[i])){
                if (nums[i+1] != nums[i]){
                    tmpl++;
                }
                i++;
            }
            res = max(res, tmpl);
            i++;
        }
        return res;
    }
};