class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int num : nums){
            if((int(log10(num)) + 1) % 2 == 0){
                res += 1;
            }
        }
        return res;
    }
};