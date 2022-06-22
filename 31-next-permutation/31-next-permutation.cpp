class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int left=0;
        int right =nums.size()-1;
        while(right>0 && nums[right-1]>=nums[right]){
            right--;
        }
        if(right == 0){
            sort(nums.begin(), nums.end());
        } else{
            left = right -1;
            int tmp = right;
            while(tmp< nums.size() && nums[tmp]>nums[left]){
                tmp++;
            }
            swap(nums[left], nums[tmp-1]);
            sort(nums.begin()+right, nums.end());
        }
        return;
    }
};