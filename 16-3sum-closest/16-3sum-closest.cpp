class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0, right = 0;
        long long minx = 0x7fffffff;
        long long res;
        long long tmp;
        for(int i=0; i<=nums.size()-3; i++){
            left = i+1;
            right = nums.size()-1;
            while(left < right){
                tmp = nums[i] + nums[left] + nums[right];
                if(tmp > target){
                    right--;
                }
                else if(tmp < target){
                    left++;
                }
                else{
                    return target;
                }
                if(abs(tmp-target) < minx){
                    minx = min(abs(tmp-target), minx);
                    res = tmp;
                }
            }
        }
        return res;
    }
};