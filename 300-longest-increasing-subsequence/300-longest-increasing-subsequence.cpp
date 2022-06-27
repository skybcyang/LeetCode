class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0)return 0;
        vector<int> dp(nums.size());
        int j, tmpmax, max=0;
        dp[0] = 0;
        for(int i=0; i<nums.size(); i++){
            j=0;
            tmpmax=0;
            while(j<i){
                if(nums[i]>nums[j])
                    if(dp[j]>tmpmax)
                        tmpmax=dp[j];
                j++;
            }
            dp[i]=tmpmax+1;
            if(dp[i]>max){
                max = dp[i];
            }
        }
        return max;
    }
};