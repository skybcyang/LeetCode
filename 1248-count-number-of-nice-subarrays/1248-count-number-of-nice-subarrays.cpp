class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> vec;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 1){
                vec.push_back(i);
            }
        }
        if(vec.size()<k){
            return 0;
        }
        int left = 0;
        int right = k-1;
        int res = 0;
        while(right<vec.size()){
            int lvalue = 0;
            if(left==0){
                lvalue = vec[left]+1;
            }else{
                lvalue = vec[left]-vec[left-1];
            }
            int rvalue = 0;
            if(right==vec.size()-1){
                rvalue = nums.size()-vec[right];
            }else{
                rvalue = vec[right+1]-vec[right];
            }
            res += lvalue * rvalue;
            left++;
            right++;
        }
        return res;
    }
};