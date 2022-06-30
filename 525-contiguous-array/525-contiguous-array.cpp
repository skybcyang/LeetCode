class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int val = 0;
        int res = 0;
        map<int, vector<int>> mmap;
        mmap[0] = {-1};
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                val--;
                if(mmap.count(val) == 0){
                    mmap[val] = {};
                }
                mmap[val].push_back(i);
            }
            if(nums[i] == 1){
                val++;
                if(mmap.count(val) == 0){
                    mmap[val] = {};
                }
                mmap[val].push_back(i);
            }
        }
        for(auto item: mmap){
            res = max(res, *max_element(item.second.begin(), item.second.end()) - *min_element(item.second.begin(), item.second.end()));
        }
        return res;
    }
};