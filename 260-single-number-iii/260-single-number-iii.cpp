class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int tmp = 0;
        for(auto num : nums){
            tmp ^= num;
        }
        int i = 0;
        while(!((1<<i) & tmp)){
            i++;
        }
        int res1 = 0;
        int res2 = 0;
        for(auto num: nums){
            if(num & (1<<i)){
                res1 ^= num;
            }
            else{
                res2 ^= num;
            }
        }
        return {res1, res2};
    }
};