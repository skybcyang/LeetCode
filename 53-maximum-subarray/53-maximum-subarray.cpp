class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int tmpsum = 0;
        for (auto num : nums){
            tmpsum += num;
            if(tmpsum > maxsum){
                maxsum = tmpsum;
            }
            if(tmpsum < 0){
                tmpsum = 0;
            }
        }
        return maxsum;
    }
};