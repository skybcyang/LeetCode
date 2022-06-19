class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=0;
        int tmp = 0;
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());
        for(i=0; i<nums.size(); i++){
            if(nums[i]>0)break;

            if(i>0 && nums[i] == nums[i-1])continue;

            j = i+1;
            k = nums.size() - 1;
            while(j<k){
                int tmp = nums[i] + nums[j] + nums[k];
                if(tmp < 0){
                    j++;
                }
                else if(tmp > 0){
                    k--;
                }
                else{
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
            }
        }
        return res;
    }
};