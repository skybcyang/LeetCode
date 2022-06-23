class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;
        if(nums.size() <= 2){
            return nums.size();
        }
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                if(i > 0 && nums[i] == nums[i-1]){
                    if(nums[i+1] != nums[j]){
                        nums[i+1] = nums[j];
                    }
                    j++;
                }
                else{
                    i++;
                    nums[i] = nums[j];
                    j++;
                }
            }
            else{
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i+1;
    }
};